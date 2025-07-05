#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;

        vector<int>a(n);
        vector<int>cost(101,INT_MAX);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cost[a[i]]=min(x,cost[a[i]]);
        
        }
        int ans=0;
        for(int i=0;i<=100;i++){
            if(c-cost[i]>0){
                ans+=c-cost[i];
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}