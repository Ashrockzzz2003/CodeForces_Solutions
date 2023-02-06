#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    
    while(t--) {
        char s;
        cin >> s;
        
        // codefrs
        
        if (s == 'c' || s == 'o' || s == 'd' || s == 'e' || s == 'f' || s == 'r' || s == 's') {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
