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
        string s;
        cin>>s;
        int sz=s.size();
        int cnt=0;
        for(int i=0,j=n-1;j>i;i++,j--){
           if(s[i]=='1'&&s[j]=='0'){
            cnt+=2;
           }else if(s[i]=='0'&&s[j]=='1'){
            cnt+=2;
           }else{
            break;
           }
        }
        cout<<sz-cnt<<'\n';

    }

    return 0;
}