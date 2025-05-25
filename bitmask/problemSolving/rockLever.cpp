#include<bits/stdc++.h>
using namespace std;
const int Maxn=30;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>cnt(Maxn);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cnt[__lg(x)]++;
        }
         long long ans=0;
        for(int i=0;i<Maxn;i++){
        ans+=(cnt[i]*(cnt[i]-1))/2;
    }
    cout<<ans<<'\n';

    }
   

    return 0;
}