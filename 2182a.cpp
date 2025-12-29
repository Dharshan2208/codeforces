#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(s.find("2026") != string::npos || s.find("2025") == string::npos){
            cout << 0 << "\n";
            continue;
        }

        // using sliding window

        // to remove all "2025"
        int count_2025 = 0;
        for (int i = 0; i + 3 < n; i++) {
            if (s.substr(i, 4) == "2025") count_2025++;
        }

        // to check how many 2026 is to be changed
        int make_2026 = 4;
        string target = "2026";

        for(int i = 0;i<n-3;i++){
            int diff = 0;

            for(int j = 0;j<4;j++){
                if(s[i+j] != target[j]){
                    diff++;
                }
            }

            make_2026 = min(make_2026,diff);
        }


        int ans = min(make_2026,count_2025);

        cout << ans << "\n";

    }

    return 0;
}
