#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i =0;i<n;i++)cin >> a[i];

        sort(a.begin(),a.end());

        long long max_element = a[n-1];

        vector<long long> b,c;

        for(int i = 0;i<n;i++){
            if(a[i] != max_element){
                b.push_back(a[i]);
            }else{
                c.push_back(a[i]);
            }
        }

        if(b.empty()||c.empty()){
            cout << -1 << "\n";
        }else{
            cout << b.size() << " " << c.size() << "\n";
            for(auto x : b)cout << x << " ";
            cout << "\n";
            for(auto x : c)cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}

