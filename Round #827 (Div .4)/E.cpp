#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    
    while(t--){
        ll n, q;
        cin >> n >> q;
        
        vector<ll> diff(n);
        
        vector<pair<ll, ll>> k(q);
        // Store the query and query number as pairs.
        
        vector<ll> final_answer(q);
        // Storing the final answer
        
        for(ll i = 0; i < n; i++){
            cin >> diff[i];
        }
        
        for(ll i = 0; i < q; i++){
            ll x;
            cin >> x;
            k[i] = {x, i};
        }
        
        sort(k.begin(), k.end());
        // Sorting the queries to calculate answers progressively! Hence avoiding repetetive calculations of max_height.
        
        ll curr_max_height = 0;
        ll j = 0;
        // j -> Iterator for diff array
        
        for(ll i = 0; i < q; i++){
            // i -> Iterator for sorted queries
            while(j < n){
                if(diff[j] <= k[i].first){
                    curr_max_height += diff[j];
                    j++;
                }
                else{
                    // We have reached the answer. Maximum height he can climb
                    break;
                }
            }
            final_answer[k[i].second] = curr_max_height;
        }
        
        for(ll i = 0; i < q; i++){
            if(i == q - 1){
                cout << final_answer[i] << endl;
            }
            else{
                cout << final_answer[i] << " ";
            }
        }
    }
}
