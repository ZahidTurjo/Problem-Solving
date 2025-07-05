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
        int sum=0;
        bool yes=false;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            if(v[i]%3==1){
                yes=true;
            }
        }
    
        if(sum%3==0){
            cout<<0<<'\n';
        }else if( sum%3==1)
        {
            if(yes){
                cout<<1<<'\n';
            }else{
                cout<<2<<'\n';
            }
        }
        
        else{
            cout<<1<<'\n';
        }
    }

    return 0;
}