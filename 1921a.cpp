#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int x[4], y[4];
        for(int i = 0; i < 4; i++) cin >> x[i] >> y[i];

        int min_x = *min_element(x, x + 4);
        int max_x = *max_element(x, x + 4);

        int side = max_x - min_x;
        cout << side * side << endl;
    }

    return 0;
}
