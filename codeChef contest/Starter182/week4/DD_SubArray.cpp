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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                ans++;
                
            }else{
                sum+=a[i];
            }
        }
        if(sum<=0){
            cout<<0<<'\n';
        }else{
            cout<<ans<<'\n';
        }
    }

    return 0;
}