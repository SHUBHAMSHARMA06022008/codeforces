#include <iostream>
using namespace std;
 int bit(){
    int x;
    cin>>x;
    int ans = 0;
    for(int i = 1; i <= x; i++){
        string input;
        cin >> input;
        if(input == "X++") ans++;
        if(input == "++X") ++ans;
        if(input == "X--") ans--;
        if(input == "--X") --ans;
    }
    return ans;
 }
int main() {
    cout<<bit()<<'\n';
      
    return 0;
}