#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int two_count = 0;
        for(int i = 0;i<n;i++){
            cin >> a[i];
            if(a[i] == 2){
                two_count++;
            }
        }

        int ans = 0;
        if(two_count%2 == 1){
            cout << -1 << "\n";
            continue;
        }

        int count = 0;
        for(int i = 0;i < n;i++){
            if(a[i] == 2){
                count++;
            }
            if(count == two_count/2){
                cout << i+1 << "\n";
                break;
            }
        }
    }
    return 0;
}
