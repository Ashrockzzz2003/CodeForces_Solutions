#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Point {
private:
    ll x, y;
    char direction;
    bool found_candy = false;
public:
    Point() {
        x = 0;
        y = 0;
    }
    
    void set_direction() {
        cin >> direction;
    }
    
    void move() {
        set_direction();
        if(direction == 'L') {
            x--;
        }
        else if(direction == 'R') {
            x++;
        }
        else if(direction == 'U') {
            y++;
        }
        else if(direction == 'D') {
            y--;
        }
        
        if(x == 1 && y == 1) {
            found_candy = true;
        }
    }
    
    void foundCandy() {
        if(found_candy) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
};

int main() {
    ll t;
    cin >> t;
    
    while(t--) {
        Point P;
        ll n;
        cin >> n;
        for(ll i = 0; i < n; i++) {
            P.move();
        }
        P.foundCandy();
    }
}
