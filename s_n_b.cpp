#include <iostream>
using namespace std;

int total(int k, int w){
    int total = 0;
    for(int i = 1; i<= w; i++){
        total += i*k;
    }
    return total;
}

int bal(int k, int n ,int w){
    int ttl = total(k,w);
    return (n-ttl) > 0 ? 0 : ttl -n;

}
int main() {
    cout<<bal(3,17,4)<<'\n';
    
    return 0;
}