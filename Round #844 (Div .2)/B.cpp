#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        vector<int> arr(n);

        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        ll ans = (arr[0] != 0) ? 2 : 1;

        for(ll i = 0; i <= n - 2; i++) {
            if (i >= arr[i] && arr[i + 1] > i + 1) {
                ans++;
            }
        }

        cout << ans << endl;
    }
}
