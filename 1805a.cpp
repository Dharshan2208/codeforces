#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int result = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            result = result^a[i];
        }

        if(n%2 == 1){
            cout << result << "\n";
        }else{
            if(result == 0){
                // cout << a[0] << "\n";
                cout << result << "\n";
            }else{
                cout << -1 << "\n";
            }
        }
    }
    return 0;
}

// logic think of xor properties
// a xor a = 0
// a xor 0 = a
// so for n even as there will be n x ..x xor x ..which will give 0
// there will either the result be 0 or it wont be that is -1
// for n odd xor of all elements and that is the answer
