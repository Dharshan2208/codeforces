#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int count=0;
        while(!is_sorted(a.begin(),a.end())){
            for(int i= count%2;i<n-1;i+=2){
                if(a[i] > a[i+1]){
                    swap(a[i],a[i+1]);
                }
            }

            count++;
        }

        cout<<count<<"\n";
    }
    return 0;
}

