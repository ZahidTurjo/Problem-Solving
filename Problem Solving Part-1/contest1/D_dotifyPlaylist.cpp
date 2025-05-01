#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        multiset<pair<int,int>>mt;
        for(int i=0;i<n;i++){
            int m,lan;
            cin>>m>>lan;
            mt.insert({-m,lan});
        }
        int mx_length=0;
        int cnt=0;
        bool found=false;
        for(auto it:mt){
           if(it.second==l){
            mx_length+=-it.first;
            cnt++;
            found=true;
            
           }
           if(cnt==k){
            break;
           }
        
        }
        if(found){

            cout<<mx_length<<'\n';
        }else{
            cout<<-1<<'\n';
        }
    }

    return 0;
}