#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a,b,c;
        cin >> a >> b >> c;

        bool flag = false;

        // we will change a
        // so b-a = a-c
        // so a = 2b-c
        long long new_a = 2 * b - c;
        if (new_a > 0 && new_a%a == 0) flag = true;


        // we will check for b
        long long new_b = (a+c)/2;
        if(new_b > 0 && new_b%b == 0 && (c-a)%2 == 0) flag = true;

        // we will change c
        // so c = 2b-a
        long long new_c = 2 * b - a;
        if (new_c > 0 && new_c%c == 0) flag = true;


        if(flag){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}