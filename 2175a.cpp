#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        set<long long>s(a.begin(),a.end());

        long long distinct = s.size();

        while (!s.count(distinct)) {
            s.insert(distinct);
            distinct++;
        }

        cout << distinct << "\n";
    }
    return 0;
}