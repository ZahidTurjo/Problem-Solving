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
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long gcd1=0;
        long long gcd2=0;
        for(int i=0;i<n;i+=2){
       
                gcd1=__gcd(gcd1,a[i]);
           
        }
        for(int i=1;i<n;i+=2){
         
            gcd2=__gcd(gcd2,a[i]);
        }
        long long ans=0;
        bool ok=true;
        for(int i=1;i<n;i+=2){
            if(a[i]%gcd1==0){
                ok=false;
            }
        }
        if(ok){
            ans=gcd1;
        }else{
            ok=true;
            for(int i=0;i<n;i+=2){
            if(a[i]%gcd2==0){
                ok=false;
            }
        }
        if(ok){
            ans=gcd2;
        }
        }
        cout<<ans<<'\n';
    }

    return 0;
}
