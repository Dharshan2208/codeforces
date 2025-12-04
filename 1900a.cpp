#include <bits/stdc++.h>
using namespace std;

int main() {
    int  t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char a[n];

        int dot = 0;
        bool three_dots = false;

        for(int i = 0;i < n;i++){
            cin >> a[i];

            if(a[i] == '.') dot ++;
        };

        for (int i = 0; i < n; i++){
            if (a[i] == '.' && i + 1 < n && a[i + 1] == '.' && i + 2 < n && a[i + 2] == '.'){
                three_dots = true;
                break;
            }
        }

        if(three_dots){
            cout << 2 << "\n";
        }else{
            cout << dot << "\n";
        }
    }
    return 0;
}

