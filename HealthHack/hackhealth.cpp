#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
//code wont calculate of obstacles that are closer than 6cm to the middle of the sensors
//all units in this code are to be input as cm
    double d1,d2,l,x,y;
    l = 12;
    cout<<"Input d1: \n";
    cin>>d1;
     cout<<"Input d2: \n";
    cin>>d2;
    y = d2*sin(acos((pow(d2,2)+pow(l,2)-pow(d1,2))/(2*l*d2)));
    if (d2>d1){
    x = -((pow(d2,2)+pow(l,2)-pow(d1,2))/(2*l))+9;}
    else if(d2<d1){
    x = -((pow(d2,2)+pow(l,2)-pow(d1,2))/(2*l))-3;}
    else{ x = 0;}
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}

