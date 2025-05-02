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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt=0;
        int mx=*max_element(v.begin(),v.end());
        int mn=*min_element(v.begin(),v.end());
        if(mx==mn)cout<<0<<'\n';
        else{

            cout<<mx-mn-1<<'\n';
        }
    }
    return 0;
}