#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for(int i = 0;i < n;i++)cin >> a[i];

        sort(a.begin(),a.end());

        int longest = 1;
        int counter = 1;
        for(int i = 0;i<n-1;i++){
            if(a[i+1] - a[i] <= k){
                counter++;
                longest = max(counter,longest);
            }else{
                counter = 1;
            }
        }

        cout << n - longest << "\n";
    }

    return 0;
}
