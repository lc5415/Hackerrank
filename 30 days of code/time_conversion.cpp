#include <iostream>
#include <math.h>


using namespace std;

string timeConversion(string s) {
    
    if (s[8] == 'P' && s[0]=='1' && s[1]=='2') //PM and noon
    {
        s[8] = ' ';
        s[8+1] = ' ';
    }
    else if (s[8] == 'P') //PM BUT not noon
    {
        s[0] = s[0]+1;
        s[1] = s[1]+2;
        s[8] = ' ';
        s[8+1] = ' ';
    }
    else if (s[0] == '1' && s[1] == '2' && s[8] == 'A' ) //AM AS IN MIDNIGHT
    {
        s[0] = s[0]-1;
        s[1] = s[1]-2;
        s[8] = ' ';
        s[8+1] = ' ';
    }
    else if (s[8] == 'A') //
    {
        s[8] = ' ';
        s[8+1] = ' ';
    }
    /*Any character in a string should be treated as a character adn therefore be between these '' (i.e. including numbers*/
    
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}