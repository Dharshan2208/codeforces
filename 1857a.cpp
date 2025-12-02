#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0;i < n;i++) cin >> a[i];

        if(n == 2){
            int first = a[0]%2;
            int second = a[1]%2;

            if((first == 0 && second == 0)||(first == 1 && second == 1)){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }
        }else{
            long sum1 = 0;
            long sum2 = 0;

            for(int i = 0;i < n;i++){
                if(a[i]%2 == 0){
                    sum1+=a[i];
                }else{
                    sum2+=a[i];
                }
            }

            if((sum1%2 == 0 && sum2%2 == 0)||(sum1%2 == 1 && sum2%2 == 1)){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}

