#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    string str;
    int cnt = 0;
    while(str.length() != x) cin >>str;
    for(int i = 1; i < x; i++){
        if(str[i] == str[i-1]) cnt++;
    }
    cout<<cnt<<'\n';
    
    return 0;
}