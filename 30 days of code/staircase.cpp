#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<vector<char>> stair(n, vector<char>(n));
                               
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            //for (int a=0; a<n; a++)
            {
                if (j < (n-1)-i)
                {stair[i][j] = ' ';}
                else
                {stair[i][j] = '#';}
            }
                                       
                                       
        }
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cout<< stair[i][j];
        }
        cout<<endl;
    }
    return 0;
   }