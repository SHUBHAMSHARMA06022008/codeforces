#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int x;
    cin>>x;
    unordered_map<int,int> m;
    unordered_map<int,int> rev;
    for(int i = 1 ; i<=x; i++ ){
        int y;
        cin>>y;
        m[i] = y;    
    }
    for(auto i: m){
        rev[i.second] = i.first;
    }
    for(int i = 1; i<=x ; i++){
        cout<<rev[i]<<" ";
    }
    cout<<endl;
    return 0;
}