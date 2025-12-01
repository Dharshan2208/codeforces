#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = abs(a[i]);
    }

    if(n == 1){
        cout << abs(a[0]) << "\n";
    }else{
        sort(b.begin(),b.end());
        cout << b[0] << "\n";
    }
    return 0;
}

