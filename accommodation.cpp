#include <iostream>
using namespace std;

int main() {
    int x ; 
    cin>> x;
   
    int rooms = 0;
    for(int i = 0 ; i< x; i
        ++){
        int z;
        int y ;
        cin>>y; 
        cin>>z;
        if(z-y-2>=0) rooms++;
    }
    cout<<rooms<<'\n';
    
    return 0;
}