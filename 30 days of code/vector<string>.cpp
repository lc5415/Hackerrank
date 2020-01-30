#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    vector <string> test(T);
    for (int i = 0;i<T;i++)
    {
        cin>> test[i];
    }
    
    for (int i =0;i<T;i++)
    {
        vector<char> odds,evens;
        for (int j= 0;j<test[i].size();j++)
        {
            if (j%2 == 0)
            {
                evens.push_back(test[i][j]);
            }
            else
            {
                odds.push_back(test[i][j]);

            }
            
        }
        for (int i =0 ;i<evens.size();i++)
        {cout<<evens[i];}
        cout<<" ";
        for (int i =0 ;i<odds.size();i++)
        {cout<<odds[i];}
        cout<<endl;
    }
    
    return 0;
}
