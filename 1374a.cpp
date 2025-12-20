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
        long long n;
        cin >> n;

        int ans = 0;
        int count_2 = 0;
        int count_3 = 0;

        while(n%2 == 0){
            count_2++;
            n /= 2;
        }

        while(n%3 == 0){
            count_3++;
            n /=3;
        }

        if(n != 1){
            ans = -1;
        }else{
            if(count_2 > count_3){
                ans = -1;
            }else{
                ans = count_3 + (count_3-count_2);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}

