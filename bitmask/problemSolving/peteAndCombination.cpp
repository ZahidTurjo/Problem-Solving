#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool fd=false;
    for(int i=0;i<(1<<n);i++){
        int ans=0;
        for(int k=0;k<n;k++){
            if((i>>k)&1){
                ans+=a[k];
            }else{
                ans-=a[k];
            }
        }
        if(ans==0 ||(ans%360==0)){
            fd=true;
        }
    }
    if(fd)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

    return 0;
}