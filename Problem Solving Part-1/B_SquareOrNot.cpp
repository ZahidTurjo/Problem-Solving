#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int one=0,zero=0;
        if(sqrt(n)*sqrt(n)!=n){
            cout<<"NO"<<'\n';
            continue;            
        }
        for(auto c:s){
            if(c=='1') one++;
            else if(c=='0') zero ++;
        }
        if(one==4 && n ==4){
            cout<<"YES"<<'\n';
            continue;
        }
        if(one>=8 && one%2==0){
            int square=one/8;
            if(square==zero){
                cout<<"YES"<<'\n';
            }else cout<<"NO"<<'\n';
        }else cout<<"NO"<<'\n';
    }
    

    return 0;
}