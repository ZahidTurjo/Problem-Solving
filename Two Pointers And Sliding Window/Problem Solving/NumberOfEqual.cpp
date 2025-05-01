#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    
    int l=0;
    int r=0;
    int cnt=0;
    long long ans=0;
    while(l<n && r<m){
        int curr=a[l],cnt1=0,cnt2=0;
        while(l<n&&a[l]==curr){
            l++;
            cnt1++;
        }

        
        while(r<m&&curr>b[r]){
            r++;
        }
        while(r<m&&b[r]==curr){
            cnt2++,r++;
        }

        ans+=(1LL*cnt1*cnt2);
       
    }
    cout<<ans<<'\n';
    
    

    return 0;
}