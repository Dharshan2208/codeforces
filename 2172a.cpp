#include <bits/stdc++.h>
using namespace std;

int main() {
    int g,c,l;
    cin >> g >> c >> l;

    vector<int> a(3);
    a[0] = g;
    a[1] = c;
    a[2] = l;

    sort(a.begin(),a.end());

    if(a[2] - a[0] >= 10){
        cout << "check again" << "\n";
    }else{
        cout << "final " <<  a[1] << "\n";
    }

    return 0;
}