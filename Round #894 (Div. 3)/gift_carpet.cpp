#include <iostream>
#include <vector>
using namespace std;

bool isSubstring(string key, string source) {
    int keyLength = key.length();
    int sourceLength = source.length();

    for (int i = 0; i <= sourceLength - keyLength; i++) {
        int j;
        for (j = 0; j < keyLength; j++) {
            if (source[i + j] != key[j]) {
                break;
            }
        }

        if (j == keyLength) {
            return true;
        }
    }

    return false;
}

string vikaLikesCarpet() {
    int n, m;
    cin >> n >> m;

    vector<string> carpet(n);
    for (int i = 0; i < n; i++) {
        cin >> carpet[i];
    }

    if (m < 3) {
        return "NO";
    }

    if (n == 1) {
        return isSubstring("vika", carpet[0]) ? "YES" : "NO";
    }

    string key = "vika";
    int next_find_index = 0;

    for (int i = 0; i < m; i++) {
        bool found = false;
        for(int j = 0; j < n; j++) {
            if (carpet[j][i] == key[next_find_index]) {
                found = true;
                break;
            }
        }

        if (found == true) {
            next_find_index++;
            if(next_find_index == 4) {
                return "YES";
            }
        }
    }

    return "NO";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        cout << vikaLikesCarpet() << endl;
    }
}