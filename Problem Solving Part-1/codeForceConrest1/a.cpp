#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        int mn=a[0];
        int mx=a[n-1];

        int minimum=(min(abs(s-mn),abs(s-mx)))+(mx-mn);
        cout<<minimum<<'\n';
    }

    return 0;
}