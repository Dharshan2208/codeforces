#include <bits/stdc++.h>
using namespace std;

int main() {
    int  t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        int one_count = 0;
        int minus_one_count = 0;
        int ops = 0;

        for(int i = 0;i < n;i++){
            cin >> a[i];

            if(a[i] == 1) one_count++;
            else minus_one_count++;
        };

        for(int i = 0;i < n;i++){
            if(minus_one_count > one_count){
                ops++;
                minus_one_count--;
                one_count++;
            }
        }

        if(minus_one_count%2 == 1){
            ops++;
        }

        cout << ops << "\n";
    }
    return 0;
}


// logic simple count negative and positive and then make negative less
//  than or equal to positive and then check if negative odd then add +1
// to opern else opern is the ans