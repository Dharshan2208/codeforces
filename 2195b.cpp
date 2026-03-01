#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int root(int num) {
    while (num % 2 == 0)
        num /= 2;
    return num;
}

int main() {
    fastio;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int>a(n);
        for(int i = 0;i < n;i++)cin >> a[i];

        bool flg = true;
        for(int i = 0;i < n;i++){
            if(root(i+1) != root(a[i])){
                flg = false;
                break;
            }
        }

        if(flg){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}
