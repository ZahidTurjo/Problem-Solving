#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        
        bool fd=true;
        int sum=0;
        int val=1;
        for(int i=2;i<=k;i++){
            val=sum+1;
            sum+=val;
            // cout<<val<<endl;
            if(x>val){
                fd=false;
            }
            
            
        }
        if(fd)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';

    }

    return 0;
}