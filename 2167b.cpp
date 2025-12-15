#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a,b;
        cin >> a >> b;

        map<char,int> mp1;
        map<char,int> mp2;

        for(char c : a){
            mp1[c]++;
        }

        for(char c : b){
            mp2[c]++;
        }

        if(mp1 == mp2){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}