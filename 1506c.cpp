#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string s1,s2;
        cin >> s1;
        cin >> s2;

        int n = s1.length();
        int m = s2.length();

        int lcs = 0;

        // Longest common ssubtring
        for (int len = 1; len <= min(n, m); len++){
			for (int i = 0; i + len <= n; i++){
				for (int j = 0; j + len <= m; j++){
					string extract_A = s1.substr(i, len);
					string extract_B = s2.substr(j, len);

					if (extract_A == extract_B)
						lcs = max(lcs, len); 
				}
			}
		}

        cout << n + m - 2*lcs << "\n"; 
    }

    return 0;
}
