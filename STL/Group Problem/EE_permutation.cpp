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
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            vector<int>a;
            for(int j=0;j<n-1;j++){
                int val;
                cin>>val;
                a.push_back(val);
            }
            v.push_back(a);
        }
        unordered_map<int,int>mp;
        
        int idx=0;
        int val;
        for(int i=0;i<n;i++){
            
            mp[v[i][0]]++;
            if(mp[v[i][0]]==1){
                idx=i;
            }
            if(mp[v[i][0]==n-1]){
                val=v[i][0];
            }
        }
        vector<int>final;
        final.push_back(val);
        for(int i=0;i<n;i++){
            if(i==idx){
                for(int j=0;j<n-1;j++){
                    final.push_back(v[i][j]);
                }
                break;
            }
        }
        for(auto x:final){
            cout<<x<<" ";
        }
        cout<<'\n';

    }

    return 0;
}