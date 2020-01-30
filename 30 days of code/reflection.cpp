#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    while(n<1 || n>15)
    {cin >>n;}
    int coord[n][4];
    for (int i =0; i<n; i++)
    {   
        for (int j =0; j<4; j++)
        {
            cin>>coord[i][j];
            while(coord[i][j]<-100 || coord[i][j]>100)
            {cin >>coord[i][j];}
        }
       
    }
    int r[n][2];
    for (int i =0; i<n; i++)
    {   
        for (int j =0; j<2; j++)
        {
            r[i][j] = 2*coord[i][j+2]-coord[i][j];
        }
       
    }
    
    for (int i =0; i<n; i++)
    {   
        for (int j =0; j<2; j++)
        {
            cout<< r[i][j]<<" ";
        }
       cout<<endl;
    }
    
    
    return 0;
}
