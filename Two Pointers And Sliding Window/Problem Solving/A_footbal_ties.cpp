#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n%3==0 && m%3==0){
            cout<<0<<'\n';
        }
        else{
            cout<<n%3<<'\n';
        }
    }

    return 0;
}