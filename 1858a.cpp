#include <iostream>
#include <vector>
using namespace std;

int main() {
    long int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        if (c % 2 == 0){
            if(a > b){
                cout << "First" << "\n";
            }else{
                cout << "Second" << "\n";
            }
        }else{
            if(b > a){
                cout << "Second" << "\n";
            }else{
                cout << "First" << "\n";
            }
        }
    }
    return 0;
}

