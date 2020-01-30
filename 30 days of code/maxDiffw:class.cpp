#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
	// Add your code here

    Difference(vector<int> e){
        elements=e;
    }

    void computeDifference(){
        maximumDifference = 0;
        int diff=0;
        long int s = elements.size();
        for(int i =0;i<s-1;i++){ //from ith to penulitmate element
            for(int j =1;j<s;j++){ //from jth(=ith+1) element to last element
            diff = abs(elements[i]-elements[j]);
            if (diff>maximumDifference)
            {maximumDifference=diff;}
            }
        }
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}