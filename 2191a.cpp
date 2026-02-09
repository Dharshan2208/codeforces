#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0;i < n;i++)cin >> a[i];

        // pair: (value, original index)
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({a[i], i});
        }

        sort(v.begin(),v.end());

        bool possible = false;

        for(int start = 0; start < 1;start++){
            vector<int> color(n);

            for(int i = 0;i<n;i++){
                color[i] = (i+start)%2;
            }

            bool ok = true;

            // Check colors in sorted order
            for (int i = 1; i < n; i++) {
                int idx1 = v[i - 1].second;
                int idx2 = v[i].second;

                if (color[idx1] == color[idx2]) {
                    ok = false;
                    break;
                }
            }

            if (ok) {
                possible = true;
                break;
            }
        }
        if(possible){
            cout << "YES" <<"\n";
        }else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}
