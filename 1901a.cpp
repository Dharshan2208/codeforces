#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int maxgap = a[0];
        for(int i = 1;i<n;i++){
            maxgap = max(maxgap,a[i]-a[i-1]);
        }

        // Will be taking double
        int lastDist = 2 *(x-a.back());

        cout << max(maxgap,lastDist) << "\n";
    }
    return 0;
}

