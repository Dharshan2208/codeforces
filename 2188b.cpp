#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int ones = 0;
        for(char c : s){
            if(c == '1') ones++;
        }

        if(ones == 0){
            cout << (n + 2) / 3 << "\n";
            continue;
        }

        long long sum = 0;
        int first_index = s.find('1');
        int last_index  = s.rfind('1');

        sum += (first_index+1)/3;

        for(int i = first_index; i < last_index; ){
            if(s[i] == '1'){
                int j = i + 1;
                int zero_count = 0;
                while(j < last_index && s[j] == '0'){
                    zero_count++;
                    j++;
                }
                sum += zero_count / 3;
                i = j;
            } else {
                i++;
            }
        }

        sum += ((n - 1) - last_index+1) / 3;
        cout << sum + ones << "\n";
    }
    return 0;
}