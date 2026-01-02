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

        string end_nums[4] = {"00","25","50","75"};
        int n = s.length();
        int ans = 999;

        for(string target : end_nums){
            // Last two position
            int pos2 = -1;
            int pos1 = -1;

            // finding the last character of target from end
            for(int i = n - 1;i >= 0;i--){
                if(s[i] == target[1]){
                    pos2 = i;
                    break;
                }
            }

            if(pos2 == -1)continue;

            // find first character of target before pos2
            for (int i = pos2 - 1; i >= 0; i--) {
                if (s[i] == target[0]) {
                    pos1 = i;
                    break;
                }
            }

            if(pos1 == -1)continue;

            // n-pos2 -1 == deletion of number  after pos2
            //  pos2-pos1-1 == deltion of number between pos1 and pos2
            int deletions = (n - pos2 - 1) + (pos2 - pos1 - 1);
            ans = min(ans,deletions);
        }

        if(ans == 999){
            cout << -1 << "\n";
        }else{
            cout << ans << "\n";
        }
    }

    return 0;
}
