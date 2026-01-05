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

        vector<long long> a(n);

        bool odd_num = false;
        bool even_num = false;

        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(a[i]%2 == 0){
                even_num = true;
            }else{
                odd_num = true;
            }
        }

        if(odd_num && even_num){
            sort(a.begin(), a.end());
        }

        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }

        cout << "\n";

    }

    return 0;
}
