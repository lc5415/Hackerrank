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
    int remainder;
    cin >> n;
    vector<int> binary;
    while (n>0)
    {
        remainder = n%2;
        n = n/2;
        binary.push_back(remainder);
    }
    
    reverse(binary.begin(),binary.end());
    /*for (int i =0; i<binary.size();i++) //inputs binary number
    {
        cout<<binary[i];
    }
    cout<<endl;*/
    int ones=0,max=0;
    for (int i =0; i<binary.size();i++)
    {
        if (binary[i]==1)
        { ones++;
            if(ones>=max)
            {max=ones;}
        }
        else
        {ones=0;}
    }
    cout<<max<<endl;
    return 0;
}