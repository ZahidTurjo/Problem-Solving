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
        if(__gcd(x,y)>1){
            cout<<0<<'\n';
            continue;
        }
        if(x==1 && y==1){
            cout<<2<<'\n';
            continue;
            
        }
        if(__gcd(x+1,y)>1 || __gcd(x,y+1)>1){
            cout<<1<<'\n';
        }else{
            cout<<2<<'\n';
        }
    }

    return 0;
}