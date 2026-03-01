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

        vector<int>p(n);
        for(int i = 0;i < n;i++)cin >> p[i];

        if(n > 1){
            int pos = -1;
            for (int i = 0; i < n; i++) {
                if (p[i] == n) {
                    pos = i;
                    break;
                }
            }
            swap(p[0], p[pos]);
        }
        
        for(int num : p)cout << num << " ";
        cout << "\n";
    }

    return 0;
}
