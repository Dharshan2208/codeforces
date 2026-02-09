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

        vector<int> p(n);
        for(int i = 0;i < n;i++)cin >> p[i];

        int flg = 0;

        for(int j = 1;j < n;j++){
            int i = -1;
            int k = -1;

            for(int l = 0;l < j;l++){
                if(p[l] < p[j]){
                    i = l;
                    break;
                }
            }

            for(int r = j+1;r < n;r++){
                if(p[r] < p[j]){
                    k = r;
                    break;
                }
            }

            if( i!= -1 && k != -1){
                cout << "YES" << "\n";
                cout << i+1 << " " << j+1 << " " << k+1 << "\n";
                flg = 1;
                break;
            }
        }

        if(flg == 0){
            cout << "NO" << "\n";
        }
    }

    return 0;
}
