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

        for(int i = 1;i <= n;i++){
            long num1 = 2*i - 1;
            long num2 = 2*i + 1;
            long long num = num1 * num2;
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
