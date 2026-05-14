#include <iostream>
using namespace std;

int main() {
    int x, y ;
    cin>>x;
    cin>>y;
    int ans = 1;
    for(int i = 0 ; i <x-1; i++){
        int z; 
        cin>>z;
        if(z==y){
            continue;
        }
        if(z!=y){
            y= z;
            ans++;
        }
    }
    cout<<ans<<'\n';
    return 0;
}