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
        int zero=0;
        for(int i=0;i<n;i++){
           cin>>a[i];
           if(a[i]==0){
            zero++;
           }
        }
       

       
       if(zero<=n-zero+1){
        cout<<0<<'\n';
        }else{
            int mx=*max_element(a.begin(),a.end());
            if(mx==1){
                cout<<2<<'\n';
            }else{
                cout<<1<<"\n";
            }
         
        }
        
        
    }

    return 0;
}