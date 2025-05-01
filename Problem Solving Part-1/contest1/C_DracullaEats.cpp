#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<2){
            cout<<0<<'\n';
            continue;
        }
        int cnt=0;
        for(int i=2;i<=n;i+=7){
            cnt++;
        }
        cout<<cnt<<'\n';
    }

    return 0;
}