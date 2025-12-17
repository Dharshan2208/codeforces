#include <bits/stdc++.h>
using namespace std;

bool checkParity(int a,int b){
    if(a%2==0 && b%2 == 0 || a%2==1 && b%2 == 1){
        return true;
    }else{
        return false;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;

        int digits = n.length();
        int first_digits = n[0] - '0';

        int ans = 9*(digits - 1) + first_digits;

        cout << ans << "\n";
    }
    return 0;
}

