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

        vector<int> a(3*n);
        for(int i = 0; i < 3*n; i++) a[i] = i + 1;

        int l = 0;
        int r = 3*n - 1;

        while(l < r){
            cout << a[l] << " " << a[r-1] << " " << a[r] << " ";
            l += 1;
            r -= 2;
        }    
        cout << "\n";
    }

    return 0;
}
