#include <bits/stdc++.h>
using namespace std;

int main() {
    int  t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i++)cin >> a[i];

        int zeroes = 0;
        int max_zeroes = 0;
        for (int i = 0; i < n; i++){
             if(a[i] == 0){
                zeroes++;
                max_zeroes = max(zeroes,max_zeroes);
             }else{
                zeroes=0;
             }
        }

        cout << max_zeroes << "\n";
    }
    return 0;
}

// logic simple greedy question