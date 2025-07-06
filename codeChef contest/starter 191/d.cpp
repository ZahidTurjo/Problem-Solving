#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(z==0 && y<2){
            cout<<"NO"<<"\n";
            continue;
        }
        if(z>=x-1 && y==0 && x>0){
            cout<<"YES"<<'\n';
        }
        else if(y>0 &&x>0 && z>=x){
            cout<<"YES"<<'\n';
        }else if(x==0){
            cout<<"YES"<<'\n';
        }
        
        else{
            cout<<"NO"<<'\n';
        }
    }

    return 0;
}