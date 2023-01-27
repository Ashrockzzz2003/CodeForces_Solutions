#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, s, r;
        cin >> n >> s >> r;

        cout << s - r << " ";
        ll remainder = (r % (n - 1));
        ll middle = (r / (n - 1));
        for (ll i = 1; i < n; i++) {
            if (remainder > 0) {
                cout << middle + 1 << " ";
                remainder--;
            }
            else {
                cout << middle << " ";
            }
        }

        cout << endl;
    }
}
