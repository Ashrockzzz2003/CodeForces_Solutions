#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    
    while(t--){
        ll n;
        cin >> n;
        
        ll max_sum = -1;
        vector<ll> arr(1001); 
        
        for(ll i = 0; i <= 1000; i++){
            arr[i] = -1;
        }
        
        for(ll i = 1; i <= n; i++){
            ll x;
            cin >> x;
            arr[x] = i;
        }
        
        for(ll i = 1; i <= 1000; i++){
            for(ll j = 1; j <= 1000; j++){
                if(arr[i] > 0 && arr[j] > 0){
                    if(__gcd(i, j) == 1){
                        max_sum = max(max_sum, arr[i] + arr[j]);
                    }
                }
            }
        }
        
        cout << max_sum << endl;
    }
}
