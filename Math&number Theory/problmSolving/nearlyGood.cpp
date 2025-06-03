#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(b==1){
            cout<<"NO"<<'\n';
            continue;
        }
        cout<<"YES"<<'\n';
        cout<<(a)<<" "<<(a*b)<<" "<<(a*b)+a<<'\n';
    }

    return 0;
}