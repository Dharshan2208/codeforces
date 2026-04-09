#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;

        vector<vector<int>> sq(n,vector<int>(m));

        int negs = 0;
        int sum = 0;
        int least_val_abs = INT_MAX;

        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                cin >> sq[i][j];
                if(sq[i][j] < 0)negs++;
                sum += abs(sq[i][j]);
                least_val_abs = min(abs(sq[i][j]),least_val_abs);
            }
        }

        if(negs % 2 == 0){
            cout << sum << "\n";
        }else{
            cout << sum - 2*least_val_abs << "\n";   
        }
    }

    return 0;
}
