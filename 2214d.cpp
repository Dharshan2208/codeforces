#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int n;
    cin >> n;

    if (n==1)cout << "walk";
    else if (n==2)cout << "no";
    else if(n==3)cout << "no";
    else if(n==4)cout << "no";
    else if(n==5)cout << "yes";
    else if(n==6)cout << "yes";
    else if(n==7)cout << "backwards";
    else cout << "7";
    cout << "\n";
    return 0;
}
