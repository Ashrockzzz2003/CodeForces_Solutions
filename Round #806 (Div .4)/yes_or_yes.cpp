#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        vector<char> s(3);
        
        for(int i = 0; i < 3; i++){
            cin >> s[i];
        }
        
        string source = "YES";
        
        bool flag = true;
        for(int i = 0; i < 3; i++){
            if(toupper(s[i]) != source[i]){
                flag = false;
                break;
            }
        }
        
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
