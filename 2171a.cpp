#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int x,y = 0;
        int combn = 0;
        if(n%2 == 1){
            combn = 0;
        }else{
            for(int i = 0;i < n;i++){
                for(int j = 0;j < n;j++){
                   if(2*i + 4*j == n)combn++;
                }
            }
        }

        cout << combn << "\n";
    }
    return 0;
}


// lgic simple tow loops and then checking