#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k; 
        cin>>n>>k;
        int ans = (k*(2*n-k+1))/2;
        if(ans%2==0){
            cout<<"Yes"<<'\n';
        }else cout<<"NO"<<'\n';
    }

    return 0;
}