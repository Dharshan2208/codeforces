#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l,a,b;
        cin >> l >> a >> b;
        unordered_set<int> st;
        int ans = 0;
        int num = a;
        int max_ans = 0;

        while(true){
            if(st.count(num)){
                break;
            }

            st.insert(num);
            max_ans = max(max_ans,num);

            num = (num+b)%l;
        }

        cout << max_ans << "\n";

    }
    return 0;
}

