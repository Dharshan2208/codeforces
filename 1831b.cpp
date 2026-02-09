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
        
        vector<long long> a(n),b(n);

        for(int i = 0;i < n;i++)cin >> a[i];
        for(int i = 0;i < n;i++)cin >> b[i];

        // longest subarray of equal values for each possible value in a and b
		vector<long long> sub_a(2*n + 1, 0),sub_b(2*n + 1, 0);

        long long counter = 1;
        for(int i = 1;i < n;i++){
            if(a[i] == a[i-1])counter++;
            else{
                sub_a[a[i-1]] = max(sub_a[a[i-1]],counter);
                counter = 1;
            }
        }
        sub_a[a[n-1]] = max(sub_a[a[n-1]],counter);

        counter = 1;

        for(int i = 1;i < n;i++){
            if(b[i] == b[i-1])counter++;
            else{
                sub_b[b[i-1]] = max(sub_b[b[i-1]],counter);
                counter = 1;
            }
        }
        sub_b[b[n-1]] = max(sub_b[b[n-1]],counter);

        long long ans = 0;
        for(int i = 0;i <= 2*n;i++){
            ans = max(ans,sub_a[i] + sub_b[i]);
        }

        cout << ans << "\n";

    }

    return 0;
}
