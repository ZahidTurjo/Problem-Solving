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
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>0)mp[v[i]]++;
        }
        if(mp.size()==0 || mp.size()==1){
            cout<<"YES"<<'\n';
        }else cout<<"NO"<<'\n';
    }

    return 0;
}