#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    long n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    for(int i = 2;i <= n;i=i+2)cout << i << " ";
    for(int i = 1;i <= n;i=i+2)cout << i << " ";

    cout << "\n";
    return 0;
}
