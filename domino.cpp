#include <iostream>
using namespace std;
int tiles(int m , int n){
    return (m*n)/2;
}
int main() {

    cout<< tiles(3,3)<<'\n';
    return 0;
}