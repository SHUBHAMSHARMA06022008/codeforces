#include <iostream>
#include <cmath>
using namespace std;
int f(int n){
    if(n % 2 == 0 ) return n/2;
    return n/2-n;

}
int main() {
    int x;
    cin>>x;
    cout<<f(x)<<'\n';
    
    return 0;
}