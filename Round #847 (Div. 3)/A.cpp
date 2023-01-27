#include <bits/stdc++.h>
using namespace std;
#define ll long long

const string PI = "314159265358979323846264338327";

int main() {
    ll t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        ll count = 0;

        while (count < n.length() && PI[count] == n[count]) {
            count++;
        }

        cout << count << endl;
    }
}
