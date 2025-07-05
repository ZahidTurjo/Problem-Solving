#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,j,k;
        cin>>n>>j>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        auto it=*max_element(v.begin(),v.end());
        if(k>=2){
            cout<<"YES"<<'\n';
            continue;
        }
        if(v[j-1]==it){
            cout<<"YES"<<'\n';
        }else cout<<"NO"<<'\n';
    }
    

    return 0;
}