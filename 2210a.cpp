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

        for(int i = n;i >= 1;i--){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}
