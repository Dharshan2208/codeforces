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

        int ans = 0;
        int sum = 0;

        vector<int> digs;

        for(int i = 0;i < s.length();i++){
            int num = s[i] - '0';
            if(i == 0)digs.push_back(num-1);
            else digs.push_back(num);
            sum += num;
        }
        
        if(sum <= 9){
            cout << 0 << "\n";
            continue;
        }

        sort(digs.begin(),digs.end());
        int n = digs.size();

        for(int i = n-1;i >= 0;i--){
            sum -= digs[i];
            ans++;
            if(sum < 10)break;
        }

        cout << ans << "\n";
    }

    return 0;
}
