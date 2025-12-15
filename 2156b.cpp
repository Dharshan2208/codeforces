#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int  t;
    cin >> t;
    while (t--) {
        int n,q;
        cin >> n >> q;
        string s;
        cin >>s;

        vector<long long> a(q);
        for(int i = 0;i < q;i++) cin >> a[i];

        bool hasB = false;
        for(char c : s)if(c =='B') {
            hasB = true;
            break;
        }

        if(!hasB){
            for(int i =0;i<q;i++){
                cout << a[i] << "\n";
            }
            continue;
        }

        for(int i = 0;i<q;i++){
            long long x = a[i];
            long long secs = 0;
            int idx = 0;

            while(x > 0){
                if(s[idx] == 'A')x=x-1;
                else x=x/2;
                secs++;
                idx++;

                if(idx == n)idx=0;
            }
            cout << secs << "\n";
        }
    }
    return 0;
}