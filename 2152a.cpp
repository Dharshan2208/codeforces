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
        set<int> vals;

        for(int i = 0;i < n;i++){
            cin >> a[i];
            vals.insert(a[i]);
        }

        int unique_vals = vals.size();

        if(unique_vals == 1){
            cout << 1 << "\n";
        }else{
            cout << 2*unique_vals - 1 << "\n";
        }
    }

    return 0;
}
