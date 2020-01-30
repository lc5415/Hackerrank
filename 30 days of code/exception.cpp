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
    string S;
    cin >> S;
    try
    {
        int int_string = stoi(S,nullptr);//stoi converts string into an int, if not displays error message
        cout<<int_string<<endl;
    }
    catch(exception& e)//if you're wondering it doesn't work if you just type catch with no brackets and no exception
    {
        cout<< "Bad String "<<endl; //cerr<< is another option but for HackerRank we want cout
    }
    return 0;
}