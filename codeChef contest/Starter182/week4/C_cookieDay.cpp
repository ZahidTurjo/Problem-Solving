#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cookie=INT_MAX;
        bool found=false;
        for(int i=0;i<n;i++){
            if(a[i]>=k){
                int val=a[i]%k;
                cookie=min(cookie,val);
                found=true;
            }
        }
        if(!found){
            cout<<-1<<'\n';
        }else{

            cout<<cookie<<'\n';
        }
    }

    return 0;
}