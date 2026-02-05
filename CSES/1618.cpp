#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    long long n;
    cin >> n;

    long long count_5 = 0;
    long long div = 5;

    while(n != 0){
        n /= 5;
        count_5 += n;

        div *= 5;
    }

    cout << count_5 << "\n";
    return 0;
}
