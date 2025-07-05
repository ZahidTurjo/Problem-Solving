#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n-1);
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        auto mx=*max_element(a.begin(),a.end());
        int x;
        cin>>x;
        cout<<mx+x<<"\n";
    }

    return 0;
}