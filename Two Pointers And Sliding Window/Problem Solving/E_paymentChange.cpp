#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        // int val=s-n*a;
        int taking_coin=min(s/n,a);
        int val=s-taking_coin*n;


        if(val<=b){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }

    }
    return 0;
}