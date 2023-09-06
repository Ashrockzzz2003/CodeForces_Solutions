#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int temp;
    int minElement = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        minElement = min(minElement, abs(temp));
    }

    cout << minElement << endl;
}