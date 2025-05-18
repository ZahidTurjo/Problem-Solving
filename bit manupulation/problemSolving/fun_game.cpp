#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        if(s==t||s[0]=='1'){
            cout<<"YES"<<'\n';
            continue;
        }
       int pos=-1;
       for(int i=0;i<n;i++){
        if(s[i]=='1'){
            pos=i;
            break;
        }
       }
       if(pos==-1){
        cout<<"NO"<<'\n';
        continue;
       }
       bool found=true;
       for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            if(pos>i){
                found=false;
                break;
            }
        }
       }
       if(found){
        cout<<"YES"<<'\n';
       }else{
        cout<<"NO"<<'\n';
       }
    }

    return 0;
}