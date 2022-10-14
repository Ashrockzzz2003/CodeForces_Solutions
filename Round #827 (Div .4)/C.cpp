#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    long long t;
    cin >> t;
    while(t--){
        vector<vector<char>> grid(8,vector<char>(8,'.'));
        for(ll i = 0; i < 8; i++){
            for(ll j = 0; j < 8; j++){
                cin >> grid[i][j];
            }
        }
        bool found = false;
        
        for(ll i = 0; i < 8; i++){
            bool flag = true;
            for(ll j = 0; j < 8; j++){
                if(grid[i][j] != 'R'){
                    flag=false;
                    break;
                }
            }
            if(flag == true){
                found = true;
                cout<<"R"<<endl;
                break;
            }
        }
        
        if(found == false){
            for (ll i = 0; i < 8; i++)
            {
                bool flag = true;
                for (ll j = 0; j < 8; j++)
                {
                    if (grid[j][i] != 'B')
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag == true)
                {
                    found = true;
                    cout << "B" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
