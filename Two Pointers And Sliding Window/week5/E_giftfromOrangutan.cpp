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
        int max_ele=*max_element(a.begin(),a.end());
        int mn_ele=*min_element(a.begin(),a.end());

        vector<int>b(n-1,mn_ele);
        vector<int>c(n,max_ele);
        b.push_back(max_ele);
  
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=(c[i]-b[i]);
            // cout<<b[i]<<" "<<c[i]<<endl;
        }
        cout<<ans<<'\n';
    }

    return 0;
}