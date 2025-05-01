#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long s;
    cin>>n>>s;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long ans=0;
    long long sum=0;
    int l=0,r=0;
    bool found=true;
    while(r<n){
        sum+=a[r];
        if(sum<=s){
            ans=(ans,r-l+1);
            r++;
            found=true;
        }else{
            sum=sum-a[l];
            l++;
            r++;
        }
    }
    if(!found)cout<<0<<'\n';
    else cout<<ans<<'\n';
 
    
    return 0;
}