#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long score = 0;

        long long a[n];
        long long b[n];

        for(int i = 0;i < n;i++)cin >> a[i];
        for(int i = 0;i < n;i++)cin >> b[i];


        long long bestK = 0, bestNegK = 0;

        for (int i = 0; i < n; i++) {
            long long newBestK = max(bestK - a[i], b[i] + bestNegK);
            long long newBestNegK = max(bestNegK + a[i], bestK - b[i]);
            bestK = newBestK;
            bestNegK = newBestNegK;
        }

        cout << bestK << "\n";
    }
    return 0;
}