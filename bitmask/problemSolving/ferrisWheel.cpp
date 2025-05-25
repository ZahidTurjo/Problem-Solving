#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int sum=0;
    int ans=0;
    int l=0;
    for(int i=n-1;i>=l;i--){
        if(v[l]+v[i]<=x){
            l++;
            ans++;
        }else{
            ans++;
        } 
   
    }
   
    cout<<ans<<'\n';

    return 0;
}