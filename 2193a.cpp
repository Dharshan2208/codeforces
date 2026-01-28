#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n,s,x;
        cin >> n >> s >> x;

        vector<int> a(n);
        int sum = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            sum += a[i];
        }

        int num = s - sum;
        int rem = num % x;

        if(rem == 0 && num >= 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
