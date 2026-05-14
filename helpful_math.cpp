#include <iostream>
using namespace std;

int main() {

    string s;
    cin >> s;

    int one = 0, two = 0, three = 0;

    for(char c : s){

        if(c == '1') one++;
        else if(c == '2') two++;
        else if(c == '3') three++;
    }

    bool first = true;

    while(one--){

        if(!first) cout << "+";
        cout << "1";
        first = false;
    }

    while(two--){

        if(!first) cout << "+";
        cout << "2";
        first = false;
    }

    while(three--){

        if(!first) cout << "+";
        cout << "3";
        first = false;
    }

    return 0;
}