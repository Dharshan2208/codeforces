#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        priority_queue<long long> A, B;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            A.push(x);
        }

        for (int i = 0; i < m; i++) {
            long long x;
            cin >> x;
            B.push(x);
        }

        bool aliceTurn = true;

        while (!A.empty() && !B.empty()) {
            if (aliceTurn) {
                long long alice = A.top();// Alice max
                long long bob = B.top(); // Bob max

                if (bob > alice) {
                    B.pop();
                    B.push(bob - alice);
                }else{
                    B.pop();
                }
            } else {
                long long x = B.top(); // Bob max
                long long y = A.top(); // Alice max

                if (y > x) {
                    A.pop();
                    A.push(y - x);
                }else{
                    A.pop();
                }
            }
            aliceTurn = !aliceTurn;
        }

        if (B.empty())
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }

    return 0;
}
