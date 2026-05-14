#include <iostream>
#include <vector>
using namespace std;
int adv(pair<int, int> p, vector<int> vec ){
    int candidates = 0;
    int cutoff = vec[p.second];
    for(int i : vec){
        if(i>= cutoff && i>0) candidates++;
    }
    return candidates;
}
int main() {
 cout<< adv({4,2}, {0,0,0,0})<< '\n';
    

    return 0;
}