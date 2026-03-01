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

        bool flg1 = false;
        for(int x : a){
            if(x == 67)flg1 = true;
        }

        if(flg1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}
