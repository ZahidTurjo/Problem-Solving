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
        unordered_map<int,int>mp;
        bool ok=true;
        int len=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            mp[a[j]]++;
            if(mp.size()>2){
               
                break;
            }if(mp.size()==2){
                len=2;
            }
        }
        }
        if(len==0)cout<<-1<<'\n';
        else cout<<len<<'\n';
    }

    return 0;
}