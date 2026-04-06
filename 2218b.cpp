#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        vector<int> a(7);

        int sum = 0;
        for(int i = 0;i < 7;i++){
            cin >> a[i];
            sum -= a[i];
        }

        sort(a.begin(),a.end());

        int max = a[6];
        sum += 2*max;
        
        cout << sum << "\n";
    }

    return 0;
}
