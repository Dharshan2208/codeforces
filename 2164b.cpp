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
        for(int i = 0; i < n; i++) cin >> a[i];

        bool found = false;

        vector<int> evens;
        for(int x : a) {
            if(x % 2 == 0) evens.push_back(x);
            if(evens.size() == 2) {
                cout << evens[0] << " " << evens[1] << "\n";
                found = true;
                break;
            }
        }

        if (found)continue;

        for(int i = 0;i < n && !found ;i++){
            for(int j = i+1;j<n;j++){
                if((a[j] % a[i])%2 == 0){
                    cout << a[i] << " " << a[j] << "\n";
                    found = true;
                    break;
                }
            }
        }

        if (!found) cout << -1 << "\n";
    }

    return 0;
}
