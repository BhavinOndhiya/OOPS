#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int countU = 0;
        for (char c : s) {
            if (c == 'U') {
                countU++;
            }
        }
        
        if (countU % 2 == 1) {
            cout << "YES" << endl; // Alice wins
        } else {
            cout << "NO" << endl; // Bob wins
        }
    }
    return 0;
}
