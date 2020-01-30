#include <iostream>
#include <math.h>


using namespace std;

int solve(int n, vector < int > s, int d, int m){
    int sum =0,ways =0;
    for (int i =0; i<m;i++)
        sum += s[i];
    if (sum == d) // checks first one
    {ways++;}
    int window_sum = sum;
    for (int i =m; i<n ;i++)
    {
        window_sum += s[i]-s[i-m]; //add in next element substract first one
        if (window_sum == d)
        {
            ways++;
        }
    }   
    
    return ways;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
        cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
