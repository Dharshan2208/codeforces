#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        int opn = 0;

        if(!is_sorted(a,a+n)){
            opn  = 0;
        }else{
            int min_diff = INT_MAX;

            for(int i =0;i < n-1;i++){
                int diff = abs(a[i+1]-a[i]);
                min_diff = min(diff,min_diff);
            }

            opn = min_diff/2 + 1;
        }

        cout << opn << "\n";
    }
    return 0;
}

