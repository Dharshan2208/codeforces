#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, k;
        cin >> x >> k;

        if(x % k == 0){
            cout << 2 << "\n";
            cout << 1 << " " << x-1 << "\n";
        }else{
            cout << 1 << "\n";
            cout << x << "\n";
        }
    }
    return 0;
}


// logic multiple answers so think of general solutions and in this question logic is
// if x%k == 0 thenn print 1,x-1 or just print 1,x .....for 1845a...logic think if x!=1 then print al…