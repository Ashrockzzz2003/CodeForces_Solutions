#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		bool flag = true;

		string source = "Timru";

		vector<char> spell(n);

		for (int i = 0; i < n; i++) {
			cin >> spell[i];
		}

		if (n != 5) {
			cout << "NO" << endl;
		}
		else {
			sort(spell.begin(), spell.end());

			for (int i = 0; i < n; i++) {
				if (spell[i] != source[i]) {
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
}