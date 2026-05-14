#include <iostream>
using namespace std;
int result(int num, int k){  
    if(k == 0 ) return num;
    if(num%10 != 0) return result(num-1, k-1);
    return result(num/10, k-1);
}
int main() {
    cout<<result(1000000000, 9)<<'\n';
    
    return 0;
}
