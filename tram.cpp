#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    int curr = 0;
    int ans  = 0;
    for(int i = 0 ; i < 2*x; i++){
        int y; 
        cin>> y;
        if(i%2 == 0 ) curr-=y;
        if(i%2 != 0) curr+= y;
        ans = max(ans , curr);
    }
    cout<<ans<<'\n';
    
    return 0;
}