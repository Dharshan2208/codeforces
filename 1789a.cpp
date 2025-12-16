#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long> a(n);

        bool flg = false;
        for(int i = 0;i<n;i++)cin >> a[i];

        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(gcd(a[i],a[j]) <= 2){
                    flg = true;
                }
            }
        }

        if(flg){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}

