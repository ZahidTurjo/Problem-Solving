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
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
       
        sort(v.begin(),v.end());
        if(v[0]==v[1]){
            cout<<"YES"<<'\n';
            continue;
        }
        if(v[0]==1){
            long long gcd=0;
            for(int i=1;i<n;i++){
                gcd=__gcd(gcd,v[i]);
            }
            if(gcd==1){
                cout<<"YES"<<'\n';
            }else{
                cout<<"NO"<<'\n';
            }
        }else{
            vector<long long>divisor;
            for(int i=1;i<n;i++){
                if(v[i]%v[0]==0){
                    divisor.push_back(v[i]);
                }
            }
            long long g=0;
            for(int i=0;i<divisor.size();i++){
                g=__gcd(g,divisor[i]);
            }
            if(divisor.size()==1){
                cout<<"NO"<<'\n';
                continue;
            }
            if(v[0]==g){
                cout<<"YES"<<'\n';
            }else{
                cout<<"NO"<<'\n';
            }
        }
     
    }
    return 0;
}
