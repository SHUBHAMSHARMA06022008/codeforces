#include <iostream>
#include <vector>
using namespace std;
int total(vector<vector<int>> v){
    int total = 0;
    for(vector<int> vec : v){
        int check = 0;
        for(int i: vec){
            if(i == 1) check ++;
            if(check >=2){
                total++;
                break;
            }
        }
    }return total;
}
int main() {

    vector<vector<int>> v = {
        {1, 1, 0},
        {1, 0, 0},
        {1, 1, 1}
    };

    cout << total(v) << endl;

    return 0;
}