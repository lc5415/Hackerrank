#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr(5);
    vector<long int> v_sum (5,0);
    
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
        cin >> arr[arr_i];
    }
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if( i != j )
            {
                v_sum[i] += arr[j];
            }
        }
    }
    
    long int max = v_sum[0], min = v_sum[0];
    
    for (int i = 0; i < 5; i++)
    {
        if (v_sum[i]>max)
        {max = v_sum[i];}
        else if(v_sum[i]<min)
        {min = v_sum[i];}
    }
    
    cout<<min<<' '<<max<<endl;
    
    
    return 0;
}
