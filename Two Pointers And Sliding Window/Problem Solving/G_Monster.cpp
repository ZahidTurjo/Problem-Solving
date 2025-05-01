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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long ans=0;
        int curr=1;
        for(int i=0;i<n;i++){
            if(a[i]>=curr){
                ans+=a[i]-curr;
                curr++;
            }
        }
        cout<<ans<<'\n';
    }
    

    return 0;
}