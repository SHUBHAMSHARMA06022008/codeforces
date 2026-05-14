#include <iostream>
#include <set>
using namespace std;

bool distinct(int y) {
    string s = to_string(y);
    set<char> st(s.begin(), s.end());
    return st.size() == 4;
}

int main() {
    int y;
    cin >> y;

    for (int i = y + 1;; i++) {
        if (distinct(i)) {
            cout << i;
            break;
        }
    }
}