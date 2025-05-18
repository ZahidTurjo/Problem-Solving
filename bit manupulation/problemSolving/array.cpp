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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int mx=*max_element(v.begin(),v.end());
        int mn=*min_element(v.begin(),v.end());
        if((v[0]!=mn &&v[0]!=mx)&&((v[0]<mx&&v[n-1]>mn)||(v[0]>mn&&v[n-1]<mx)) ){
            cout<<"YES"<<'\n';
        }else cout<<"NO"<<'\n';
    }

    return 0;
}