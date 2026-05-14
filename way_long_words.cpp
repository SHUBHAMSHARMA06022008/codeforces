#include <iostream>
using namespace std;

string conv(string s){
    return s[0] + to_string(s.length() -2) + s[s.length()-1];
}
int main() {
    cout<< conv("pneumonoultramicroscopicsilicovolcanoconiosis")<<'\n';
    
    return 0;
}