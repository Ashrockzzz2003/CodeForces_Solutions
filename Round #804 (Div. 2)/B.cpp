#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	cin >> t;

	while (t--) {
		ll n, m;
		cin >> n >> m;

		vector <vector<int>> arr(n, vector<int> (m));

		/*
		* 1 0 | 0 1 | 1 0 | 0 1
		* 0 1 | 1 0 | 0 1 | 1 0
		* 0 1 | 1 0 | 0 1 | 1 0
		* 1 0 | 0 1 | 1 0 | 0 1
		*/

		for (ll i = 0; i < n; i+=2) {
			for (ll j = 0; j < m; j+=2) {
				if ((i + j) % 4 == 0) {
					/*
					* 0 1
					* 1 0
					*/
					arr[i][j] = 0;
					arr[i + 1][j] = 1;
					arr[i][j + 1] = 1;
					arr[i + 1][j + 1] = 0;
				}
				else {
					/*
					* 1 0
					* 0 1
					*/
					arr[i][j] = 1;
					arr[i + 1][j] = 0;
					arr[i][j + 1] = 0;
					arr[i + 1][j + 1] = 1;
				}
			}
		}

		for (ll i = 0; i < n; i++) {
			for (ll j = 0; j < m; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
}
