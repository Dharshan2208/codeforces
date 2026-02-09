#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

bool fair(long long n){
    long long n1 = n;

    while(n1 != 0){
        int last_digit = n1%10;

        if(last_digit != 0 && n%last_digit != 0){
            return false;
        }

        n1 /= 10;
    }

    return true;
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        while(!fair(n)){
            n+=1;
        }

        cout << n << "\n";
    }

    return 0;
}
