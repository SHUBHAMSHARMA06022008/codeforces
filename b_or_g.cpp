#include <iostream>
using namespace std;

int main() {

    string s;
    cin >> s;

    int freq[26] = {0};
    int cnt = 0;

    for(char c : s){

        if(freq[c - 'a'] == 0){
            cnt++;
            freq[c - 'a'] = 1;
        }
    }
    if(cnt% 2 != 0 ) {
        cout<< "DONT TALK TO HER";
        return ;}
    cout<< "go on buddy";


    return 0;
}