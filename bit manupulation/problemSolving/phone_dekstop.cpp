#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int ans=ceil(y/2.0);
        int squareLeft=0;
        if(y%2==1){
             squareLeft=(y/2)*7+11;
        }else{
          squareLeft=(y/2)*7;
        }
        
        if(x<=squareLeft){
            cout<<ans<<'\n';
        }else{
            int needed=x-squareLeft;
            cout<<ans+ceil(needed/15.0)<<'\n';
        }
    }

    return 0;
}
