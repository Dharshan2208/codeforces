#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int zeroes = 0;
        int ones = 0;

        for(char c : s){
            if(c == '1')ones ++;
            else zeroes++;
        }

        int ans = min(zeroes,ones);

        if(ans % 2 == 1){
            cout << "DA" << "\n";
        }else{
            cout << "NET" << "\n";
        }
    }

    return 0;
}
