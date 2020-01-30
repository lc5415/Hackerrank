#include <iostream>
#include <vector>
using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    vector<int> v(2,0); 
    vector<int> v_a (3);
    v_a = {a0,a1,a2};
    vector<int> v_b (3);
    v_b = {b0,b1,b2};
    for(int i =0; i<v_a.size();i++)
    {
        if (v_a[i] > v_b[i])
        {v[0] += 1;}
        else
        {v[1] += 1;}
    }
    return v;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    if (a0<1 || a0>100)
    {cin >> a1;}
    if (a1<1 || a2>100)
    {cin >> a2;}
    if (a2<1 || a2>100)
    {cin >> a2;}
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    if (b0<1 || b0>100)
    {cin >> b0;}
    if (b1<1 || b1>100)
    {cin >> b1;}
    if (b2<1 || b2>100)
    {cin >> b2;}
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}