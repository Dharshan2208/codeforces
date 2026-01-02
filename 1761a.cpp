#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin >> n >> a >> b;

        if(n == a && n == b){
            cout << "YES" << "\n";
        }else if(a + b + 2 <= n){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }

    }

    return 0;
}
