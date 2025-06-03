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
        int mx=INT_MIN;
        int ans=0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            
        }
        for(int i=0;i<n;i++){
         
            
            
            if(mx>v[i]){
                ans++;
            }
            mx=max(v[i],mx);
         
            
            
        }
        cout<<ans<<'\n';
    }
    return 0;
}