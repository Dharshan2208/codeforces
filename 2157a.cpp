#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());


        map<int,int> mp;

        for(int num : a){
            mp[num]++;
        }

        int deletions = 0;

        for(auto &i : mp){
            int x = i.first;
            int count = i.second;

            if(count < x){
                deletions+=count;
            }else{
                deletions += (count-x);
            }
        }

        cout << deletions << "\n";

    }
    return 0;
}