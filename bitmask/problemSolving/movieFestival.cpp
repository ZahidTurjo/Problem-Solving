#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int curr=v[0].second;
    int ans=1;
    for(int i=1;i<n;i++){
        if(v[i].first>=curr){
            curr=v[i].second;
            ans++;
        }
        else{
            curr=min(v[i].second,curr);
        }
    }
    cout<<ans<<'\n';


    return 0;
}