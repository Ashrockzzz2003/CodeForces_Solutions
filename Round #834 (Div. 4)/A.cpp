#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool valid(string in, int i){
    if(in[i] == 'e'){
        if(in[i+1] == 's'){
            return true;
        }
    }
    else if(in[i] == 's'){
        if(in[i+1] == 'Y'){
            return true;
        }
    }
    else if(in[i] == 'Y'){
        if(in[i+1] == 'e'){
            return true;
        }
    }
    return false;
}

int main(){
    ll t;
    cin >> t;
    
    while(t--){
        string in;
        cin >> in;
        
        if(in.size() == 1){
            if(in == "e" || in == "s" || in == "Y"){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            bool flag = true;
        
            for(int i = 0; i < in.size()-1; i++){
                if(!valid(in, i)){
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
}
