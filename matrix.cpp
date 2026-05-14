#include <iostream>
using namespace std;
int steps(int row, int col ){
     return abs(row-3) + abs(col-3);
}
int main() {
    cout<< steps(2,5)<<" "<<steps(3,2)<< '\n';
    
    return 0;
}