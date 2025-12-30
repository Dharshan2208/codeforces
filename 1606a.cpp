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

        int n = s.length();
        // int ab = 0,ba = 0;

        // for(int i = 0;i<n-1;i++){
        //     if(s[i] == 'a' && s[i+1] == 'b') ab++;
        //     if(s[i] == 'b' && s[i+1] == 'a') ba++;
        // }

        // if(ab == ba){
        //     cout << s << "\n";
        // }else{
        //     s[0] = s[n-1];
        //     cout << s << "\n";
        // }

        if(s[0] != s[n-1]){
            if(s[0] == 'a'){
                s[0] = 'b';
            }else {
                s[0] = 'a';
            }
        }

        cout << s << "\n";

    }

    return 0;
}
