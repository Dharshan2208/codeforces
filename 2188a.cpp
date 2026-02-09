#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        vector<int> p(n+1), u(n+1,1);

        int last=n;
        p[n]=last; u[last]=0;

        for(int i=n-1;i>=1;--i){
            int r=p[i+1]%i, x=0;

            for(int v=n;v >= 1;--v){
                if(u[v] && v%i == r){
                    x=v;
                    break;
                }
            }
            p[i]=x; u[x]=0;
        }
        for(int i=1;i<=n;i++) cout<<p[i]<< " ";
        cout << "\n";
    }
    return 0;
}