#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<char> row_1(n), row_2(n);

		for (int i = 0; i < n; i++) {
			cin >> row_1[i];
		}

		for (int i = 0; i < n; i++) {
			cin >> row_2[i];
		}

		bool flag = true;

		for (int i = 0; i < n; i++) {
			if (row_1[i] != row_2[i] && (row_1[i] == 'R' || row_2[i] == 'R')) {
				flag = false;
			}
		}

		

		if (flag) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
