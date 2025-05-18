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
        int ans=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int movi,cost;
            cin>>movi>>cost;
            if(movi>=7){
                if(mp.find(movi)==mp.end()){
                          mp[movi]=cost;
                }else{
                mp[movi]=min(mp[movi],cost);
            }
            }
        }
       if(mp.empty()){
        cout<<-1<<'\n';
       }else{
          int ans=INT_MAX;
        for(auto[x,y]:mp){
            // cout<<x<<" "<<y<<'\n';
            ans=min(ans,y);
        }
        cout<<ans<<'\n';
       }
    }

    return 0;
}