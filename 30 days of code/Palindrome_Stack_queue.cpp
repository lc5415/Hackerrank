#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Solution {
    queue<char> myQueue;
    stack<char> myStack;
public:
    
    void pushCharacter(char ch){
        myStack.push(ch);
    }
    void enqueueCharacter(char ch){
        myQueue.push(ch);
    }
    char popCharacter(){
        //while(!myStack.empty()) DOESN'T WORK W/ THE WHILE LOOPS AS IT MAY NEVER ENTER THEM
        //{
        char c = myStack.top();
        myStack.pop();
        return c;
        // }
    }
    char dequeueCharacter(){
        //while(!myQueue.empty())
        //{
        char c = myQueue.front();
        myQueue.pop();
        return c;
        //}
    }
    
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
    // create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
