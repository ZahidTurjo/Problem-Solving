#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s ;
        cin>>s;
        int n=stoi(s);
        int a=sqrt(n);
        if(a*a==n){
            cout<<0<<" "<<a<<'\n';
        }else{
            cout<<-1<<'\n';
        }

    }

    return 0;
}