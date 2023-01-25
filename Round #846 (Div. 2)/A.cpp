#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    
    while(t--) {
        // 0 0 1 1
        // 1 1 1 3
        ll n;
        cin >> n;
        
        vector<ll> even_indices, odd_indices;
        
        for(ll i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            
            if(x % 2 == 0) {
                even_indices.push_back(i);
            }
            else {
                odd_indices.push_back(i);
            }
        }
        
        // min 2 even 1 odd
        // min 3 odd
        
        if(even_indices.size() >= 2 && odd_indices.size() >= 1) {
            cout << "YES" << endl;
            for(ll i = 0; i < 2; i++) {
                cout << even_indices[i] << " ";
            }
            cout << odd_indices[0] << endl;
        }
        else if (odd_indices.size() >= 3) {
            cout << "YES" << endl;
            for(ll i = 0; i < 3; i++) {
                cout << odd_indices[i] << " ";
            }
            cout << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
