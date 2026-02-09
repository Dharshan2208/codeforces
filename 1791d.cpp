#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> pref(n+1,0),suff(n+1,0);
        unordered_set<char> st;

        // storing prefix count after each charcater
        for(int i = 0;i < n;i++){
            st.insert(s[i]);
            pref[i] = st.size();
        }


        // storing suffix count after each charcater
        st.clear();
        for(int i = n-1;i >= 0;i--){
            st.insert(s[i]);
            suff[i] = st.size();
        }

        int ans = 0;
        for(int i = 0;i < n-1;i++){
            ans = max(ans,pref[i]+suff[i+1]);
        }

        cout << ans << "\n";

    }

    return 0;
}
