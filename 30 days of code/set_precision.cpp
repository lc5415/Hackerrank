#include <bits/stdc++.h>
#include <math.h>

using namespace std;

float lowestTriangle(float base, float area){
    float h;
    h = 2*area/base;
    return ceil(h);
}

int main() {
    float base;
    float area;
    cin >> base >> area;
    float height = lowestTriangle(base, area);
    cout <<fixed<<setprecision(0)<< height << endl;
    return 0;
}
    return 0;
}
