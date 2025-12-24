#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        vector<long long> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        long long A_min_total = 0, B_min_total = 0;
        long long p_total = 0;
        for (int i = 0; i < n; i++) {
            p_total += p[i];
            if (s[i] == '0') {
                A_min_total += p[i]/2 + 1;
            } else {
                B_min_total += p[i]/2 + 1;
            }
        }

        if(p_total > x + y){
            cout << "NO\n";
            continue;
        }

        if (A_min_total > x || B_min_total > y) {
            cout << "NO\n";
        }
        else {
            bool has0 = false;
            bool has1 = false;

            for(char c : s){
                if(c == '0')has0 = true;
                if(c == '1')has1 = true;
            }

            if(has0 && has1){
                cout << "YES\n";
            }else if(has0){
                if(x >= y + n){
                    cout << "YES\n";
                }else{
                    cout << "NO\n";
                }
            }else{
                if(y >= x + n){
                    cout << "YES\n";
                }else{
                    cout << "NO\n";
                }
            }
        }
    }
    return 0;
}