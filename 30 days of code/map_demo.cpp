#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map <string,string> Book;
    int n;
    string name;
    string number;
    cin>>n;
    for(int i =0; i<n;i++)
    {
        cin>>name;
        cin>> number;
        Book[name]=number;
    }
    
    while(cin>>name)
    {
        if (Book.find(name) != Book.end())
        {
            cout<<name<<"=";
            cout<<Book.at(name)<<endl;
        }
        else
        {
            cout<<"Not found"<<endl;
        }
    }
    
    return 0;
}

