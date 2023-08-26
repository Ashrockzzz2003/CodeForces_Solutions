#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a;

        int temp_b;
        cin >> temp_b;
        a.push_back(temp_b);

        for(int i = 1; i < n; i++) {
            cin >> temp_b;
            if (temp_b < a.back()) {
                a.push_back(temp_b);
            }
            a.push_back(temp_b);
        }

        cout << a.size() << endl;
        for(int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}