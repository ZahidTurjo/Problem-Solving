#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=0;
    long long ans=0;
    multiset<long long>ml;
    while(r<n){
        ml.insert(a[r]);
        auto mn=ml.begin();
        auto mx=ml.rbegin();
        if((*mx-*mn)<=k){
            ans+=(r-l+1);
        }else{
            while(l<=r){
                auto MN=ml.begin();
                auto MX=ml.rbegin();
                if(*MX-*MN<=k)break;
                ml.erase(ml.find(a[l]));
                l++;
                
            
                auto MN1=ml.begin();
                auto MX1=ml.rbegin();
                if((*MX1-*MN1)<=k){
                    ans+=(r-l+1);
                }
            }
        }
        r++;
    }
    cout<<ans<<'\n';

    return 0;
}