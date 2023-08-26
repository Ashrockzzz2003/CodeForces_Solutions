#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        // n-> Number of Wheels
        
        vector<int> digits(n);
        for(int i = 0; i < n; i++){
            cin >> digits[i];
        }
        
        
        for(int i = 0; i < n; i++){
            int number_of_moves;
            cin >> number_of_moves;
            
            vector<char> moves(number_of_moves);
            for(int j = 0; j < number_of_moves; j++){
                cin >> moves[j];
            }
            
            for(int j = 0; j < number_of_moves; j++){
                if(moves[j] == 'D'){
                    digits[i] = (digits[i] + 1)%10;
                }
                else if (moves[j] == 'U'){
                    if(digits[i] - 1 == -1){
                        digits[i] = 9;
                    }
                    else{
                        digits[i] -= 1;
                    }
                }
            }
        }

        for(int i = 0; i < n; i++){
            if (i == n-1){
                cout << digits[i] << endl;
            }
            else{
                cout << digits[i] << " ";
            }
        }
    }
}
