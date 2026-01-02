#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> b(n);
        for(int i = 0;i < n;i++)cin >> b[i];

        vector<long long> a;

        // Starting element of both the arrays are same
        a.push_back(b[0]);

        // We have to add elements of b to a and also
        // duplicates of elements
        // if a[i-1] <= a[i] then those are added to b
        // so opposite b[i] < b[i-1] if they are there we adding duplicates
        // else just addding the same elements
        
        for(int i = 1;i < n;i++){
            if(b[i] < b[i-1]){
                a.push_back(b[i]);
                a.push_back(b[i]);
            }else{
                a.push_back(b[i]);
            }
        }

        cout << a.size() << "\n";
        for(long long num : a){
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
