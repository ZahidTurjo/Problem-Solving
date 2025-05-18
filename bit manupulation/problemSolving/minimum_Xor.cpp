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
        int ans=v[0];
        for(int i=1;i<n;i++){
            ans^=v[i];
        }
        auto it=find(v.begin(),v.end(),ans);
        if(it!=v.end()){
            // v.erase(it);
            // int ln=v.size();
            // int ans1=v[0];
            // for(int i=1;i<n;i++){
            //     ans1=ans1^v[i];
            // }
            cout<<0<<'\n';
            continue;
        }
        if(ans==0){
            cout<<ans<<'\n';
            continue;
        
        }
      
            int mn=INT_MAX;
            for(int i=0;i<n;i++){
              
              mn=min(mn,ans^v[i]);

            }
            cout<<min(mn,ans)<<'\n';
        
        
    }

    return 0;
}