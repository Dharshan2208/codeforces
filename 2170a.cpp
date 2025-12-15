#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if(n == 1){
            cout << "1" <<"\n";
        }else if(n == 2){
            cout << "9" << "\n";
        }else{
            int ans1 = 4*(n*n) - n - 4;
            int ans2 = 5*(n*n - n - 1);

            if(ans1 > ans2){
                cout << ans1 << "\n";
            }else{
                cout << ans2 << "\n";
            }
        }
    }
    return 0;
}

