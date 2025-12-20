#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        int k;
        cin >> n >> k;

        if(k%2 == 1){
            for(int i = 0;i<k;i++){
                cout << n << " ";
            }
            cout << "\n";
        }else{
            if(k == 2){
                cout << 0 << " " << n << "\n";
            }else{
                int a = 0;
                int b = n;

                int sum = n*(k-1);

                int another_sum = 0;
                int c = 0;
                for(int i = n-1;i > 0;i /=2){
                    another_sum += (i-pow(2,c));
                    c+=1;
                }

                if(sum > another_sum){
                    cout << a << " " << b << " ";
                    for(int i = 0;i<k-2;i++){
                        cout << n << " ";
                    }
                    cout << "\n";
                }else{
                    int c = 0;
                    for(int i = n-1;i > 0;i /=2){
                        cout  << (i-pow(2,c)) << " ";
                        c+=1;
                    }
                }
            }
        }
    }
    return 0;
}

