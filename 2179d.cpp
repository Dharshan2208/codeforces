#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int max_num = (1 << n) - 1;
        set<int> used;

        vector<int> arr;

        int curr = max_num;
        while(curr > 0){

            if (!used.count(curr)) {
                arr.push_back(curr);
                used.insert(curr);
            }

            for(int i = curr + 1;i <= max_num;i++){
                if((i&curr) == curr && !used.count(i)){
                    arr.push_back(i);
                    used.insert(i);
                }
            }
            curr /= 2;
        }

        arr.push_back(0);
        used.insert(0);

        for(int i = 0; i < max_num;i++){
            if(!used.count(i)){
                arr.push_back(i);
                used.insert(i);
            }
        }

        for(auto i : arr){
            cout << i << " ";
        }
        cout << "\n";

    }
    return 0;
}
