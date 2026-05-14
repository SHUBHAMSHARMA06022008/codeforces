#include <iostream>
#include <string>
using namespace std;

string possible(int num){
    if(num%2 == 0 && num >2) return "YES";
    return "NO";
}
int main() {
    cout<< possible(7)<<'\n';
    
    return 0;
}