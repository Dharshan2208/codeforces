#include <bits/stdc++.h>
using namespace std;

bool checkParity(int a,int b){
    if(a%2==0 && b%2 == 0 || a%2==1 && b%2 == 1){
        return true;
    }else{
        return false;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int ans = 0;
        for(int i = 0;i < n-1;i++){
            if(checkParity(a[i],a[i+1])){
                ans++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}

