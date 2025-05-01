#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        deque<string>v(n);
        for(ll i=0;i<n;i++){
            string s;
            cin>>s;
            v[i]=s;
        }
     
       
        ll cnt=0;
        for(ll i=0;i<n-1;i++){
            string x=v[i];
            for(ll j=i+1;j<n;j++){
                if((x[0]!=v[j][0])&&x[1]==v[j][1]){
                    cnt++;
                }
                if((x[0]==v[j][0])&&x[1]!=v[j][1]){
                    cnt++;
                }

            }
        }

        cout<<cnt<<'\n';


    }

    return 0;
}