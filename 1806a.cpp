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
        long long a,b,c,d;
        cin >> a >> b >> c >> d;

        int ans = 0;
        if(b > d){
            ans = -1;
        }else if(a == c && b == d){
            ans = 0;
        }else{
            int y_move = d-b;
            a = a + y_move;

            if(a < c){
                ans = -1;
            }else{
                int x_move = abs(c-a);
                ans = x_move + y_move;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}

