#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>a(n);

        int one=0,two=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) one++;
            else if(a[i]==2) two++;
        }

        if(one==n || two==n){
            cout<<0<<'\n';
            continue;
        }
     
        int ans=INT_MAX;
        if(one%2==0){
            ans=one/2;
        }
        cout<<min(ans,two)<<'\n';

       
        
    }

    return 0;
}