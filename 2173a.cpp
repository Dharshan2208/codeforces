#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        // int zeroes = 0;
        // int sleep = 0;

        // for(int i = 0;i<n;i++){
        //     // cout << s[i] << " ";
        //     if(s[i] == '0'){
        //         zeroes++;
        //     }
        // }

        // if(zeroes == n ){
        //     sleep = n;
        // }else{
        //     int index = 0;
        //     while(index < n){
        //         if(s[index] == '0'){
        //             sleep++;
        //             index++;
        //         }else{
        //             index = index + k + 1;
        //         }
        //     }
        // }

        int imp = 0;
        int sleep = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                imp = k;
            } else {
                if (imp > 0) {
                    imp--;
                } else {
                    sleep++;
                }
            }
        }

        cout << sleep << "\n";
    }
    return 0;
}