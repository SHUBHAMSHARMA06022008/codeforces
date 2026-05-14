#include <iostream>
#include <string>
using namespace std;

int main() {
    double x ;
    cin>>x;
    int sum = 0;
    for(int i = 0; i< x; i++){
        int y;
        cin>>y;
        sum += y;
    }
    cout<<to_string(sum / x) + "%"<<'\n';

    return 0;
}