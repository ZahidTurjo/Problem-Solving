#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        long long ans=0;
        for(int i =0;i<n;i++)
        {
            int val=a[i]*x;
            if(val<y){
                ans+=val;
            }else{
                ans+=y;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}