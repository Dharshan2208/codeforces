#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long n,k;
        cin >> n >> k;

        vector<pair<long,long>> a(n);
        for(int i = 0;i < n;i++){
            long x;
            cin >> x;
            a[i] = {x,i+1};
        }

        for(int i = 0;i < n;i++){
            a[i].first = a[i].first % k;
            if(a[i].first == 0){
                a[i].first = k;
            }
        }

        sort(a.begin(),a.end(),[&](pair<long,long> x,pair<long,long> y){
            if(x.first != y.first)return x.first > y.first;
            return x.second < y.second; 
        });

        for(auto x : a){
            cout << x.second << " ";
        }
        cout << "\n";
    }

    return 0;
}
