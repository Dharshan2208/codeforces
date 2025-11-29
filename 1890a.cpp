#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long b[n];
        for (int i = 0; i < n; i++) cin >> b[i];

        if( n == 2){
            cout << "YES" << "\n";
            continue;
        }

        map<long long,long long> freq;
        for(int i = 0;i < n;i++) freq[b[i]]++;

        if(freq.size() >= 3){
            cout << "NO" << "\n";
        }else{
            // Counting the values frequenices
            long long freq1 = freq.begin()->second;
            long long freq2 = freq.rbegin()->second;

            if(freq1 == freq2){
                cout << "YES" << "\n";
            }else if (n%2 == 1 && abs(freq1 - freq2) == 1){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }
        }

    }
    return 0;
}

