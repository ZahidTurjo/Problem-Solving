#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int total=n*m;
        
        int mn=INT_MAX;
        for(int i=1;i<m;i++){
            int choc=n*(m-i);
            if(choc>=k){
                mn=min(mn,choc);
            }
        }
        for(int i=1;i<n;i++){
            int choc=m*(n-i);
            if(choc>=k){
                mn=min(mn,choc);
            }
        }
        if(total>=k){
            mn=min(mn,total);
        }
       if(mn==INT_MAX){
        cout<<0<<'\n';
       }else{
        cout<<total-mn<<'\n';
       }

    }

    return 0;
}