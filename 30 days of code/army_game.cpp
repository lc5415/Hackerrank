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
    int n;
    int m;
    int s;
    cin >> n >> m;
    
    if(n%2==0 && m%2==0)//even rows and columns
    {
        s = (n/2)*(m/2);
        cout<< s;
    }
    
    else if(n%2==1 && m%2==1 && n==1)//case where 1 row
    {
        s = ((m+1)/2);
        cout<< s;
    }
    else if(n%2==1 && m%2==1 && m==1) //case where 1 column
    {
        s = ((n+1)/2);
        cout<< s;
    }
    else if(n%2==1 && m%2==1) //odd rows and columns
    {   
        s = ((n-1)/2)*((m-1)/2)+((m+n)/2);
        cout<< s;
    }
    else if(n%2==0 && m%2==1)//even rows odd colums
    {
        s = (n/2)*((m-1)/2)+n/2;
        cout<< s;
    }
    else if(n%2==1 && m%2==0)//odd rows even colums
    {
        s = (m/2)*((n-1)/2)+m/2;
        cout<< s;
    } 
    
    return 0;
}