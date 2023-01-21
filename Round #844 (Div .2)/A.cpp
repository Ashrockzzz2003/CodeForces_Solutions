#include <iostream>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    
    while(t--) {
        ll w, d, h;
        cin >> w >> d >> h;
        ll a, b, f, g;
        cin >> a >> b >> f >> g;
        
        ll min_dist = f + h + a + abs(b-g);
        min_dist = min(min_dist, w - f + h + w - a + abs(b - g));
        min_dist = min(min_dist, g + h + b + abs(a - f));
        min_dist = min(min_dist, d - g + h + d - b + abs(a - f));
        
        cout << min_dist << endl;
    }
}
