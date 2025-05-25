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
        int mx=INT_MIN;

        for(int i=1;i<m;i++){
            int bob=n*i;
            int ali=total-bob;
            if(bob>=k){
                mx=max(mx,ali);
            }

        }
        for(int i=1;i<n;i++){
            int bob=m*i;
            int ali=total-bob;
            if(bob>=k){
                mx=max(mx,ali);
            }

        }
        if(total>=k){
            mx=max(mx,total-k);
        }
       if(k==0){
        cout<<total<<'\n';
       }else{
        cout<<mx<<'\n';
       }


    }

    return 0;
}