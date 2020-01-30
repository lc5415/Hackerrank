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
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        while(x!=z && y!=z) //we only need one of the conditions to be satisfied to stop the code from running 
        // while only runs while what inside is true or equal boolean 1
        {
            if (x<z)
            {x++;}
            else if(x>z)
            {x--;}
            if (y<z)
            {y++;}
            else if(y>z)
            {y--;}
        }
        if (x==y){
            cout<<"Mouse C"<<endl;
        }
        
        else if(y==z){
            cout<<"Cat B"<<endl;
        }
        else{
            cout<<"Cat A"<<endl;
        }
        
    }
    
    return 0;
}