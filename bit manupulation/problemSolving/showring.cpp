#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        int start=0;
        bool fnd=false;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if((a-start)>=s){
               fnd=true;
        }
        start=b;
    }
    // if(m-start>=s){

    //   fnd=true;
        
    // }  
    if(fnd)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
   
}

    return 0;
}