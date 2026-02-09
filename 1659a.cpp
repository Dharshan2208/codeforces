#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n,r,b;
        cin >> n >> r >> b;

        int gap = r/(b+1);
        int extra = r%(b+1);

        string ans = "";

        for(int i = 0;i <= b;i++){
            ans.append(gap,'R');
            if(extra > 0){
                ans+='R';
                extra--;
            }
            if(i != b)ans+='B';
        }

        if (extra > 0) ans += 'R';

        cout << ans << "\n";
    }

    return 0;
}
