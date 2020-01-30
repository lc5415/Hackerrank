#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i=1;i<=n;i++)
    {
        fact += fact*(n-i);
    }
    return fact;
}

int main() {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}