#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> a(n);
        string s="";

        for(int i = 0;i<n;i++)cin >> a[i];

        s=s+a[0];
        for (int i = 1; i < n; i++) {
            string string_1 = a[i] + s;
            string string_2 = s + a[i];

            s = min(string_1, string_2);
        }

        cout << s << "\n";
    }
    return 0;
}

