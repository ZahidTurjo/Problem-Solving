#include<bits/stdc++.h>
using namespace std;
bool isPossible(int mid,vector<int>&a,vector<int>&b,int n){
    vector<int>sp;
    int event=0;
    for(int i=0;i<n;i++){
        int gap=mid-a[i];
        if(gap>=b[i]){
            sp.push_back(gap-b[i]);
        }else{
            event+=b[i]-gap;
        }
        
    }
    for(int val:sp){
            event-=val/2;
        }
        if(event<=0) return true;
        else return false;
}
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
        vector<int>b(n);

        int mx=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
        }

        for(int i=0;i,n;i++){
            cin>>b[i];
        }
        
        int low=mx,high =1e14,ans=high;
        while (low<=high)
        {
            int mid=(low+high)/2;
            if(isPossible(mid,a,b,n)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid-1;
            }
        }
        cout<<ans<<'\n';
        











    }
    

    return 0;
}