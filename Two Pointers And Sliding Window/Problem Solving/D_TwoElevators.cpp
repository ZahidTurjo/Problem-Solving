#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int second=abs(b-c)+abs(c-1);
        int fisrt=abs(a-1);
        if(second==fisrt){
            cout<<3<<'\n';
        }
        else if(fisrt<=second){
            cout<<1<<'\n';
        }else{
            cout<<2<<'\n';
        }
        
    }

    return 0;
}