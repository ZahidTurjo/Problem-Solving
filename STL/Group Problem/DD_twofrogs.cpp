#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        if(a%2==0 && b%2==0){
            cout<<"YES"<<'\n';
        }else if(a%2==1 && b%2==1){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
        

    }

    return 0;
}