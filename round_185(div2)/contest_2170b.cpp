#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        int zeroes = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if(b[i] == 0) zeroes++;
            sum += b[i];
        }

        cout << min(sum-n+1,n-zeroes) << "\n";
    }
    return 0;
}

