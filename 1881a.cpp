#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;

        string x;
        cin  >> x;

        string s;
        cin >> s;

        int ans = 0;

        while (x.find(s) == string::npos) {
            if (x.size() > 25) {
                ans = -1;
                break;
            }
            x += x;
            ans++;
        }

        cout <<  ans << "\n";
    }
    return 0;
}
