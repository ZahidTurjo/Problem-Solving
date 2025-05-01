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
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
           
        }
        int flag=0;
       
       for(int i=n-1;i>=0;i--){
           mp[v[i]]++;
       if(mp[v[i]]>1){

           cout<<i+1<<'\n';
           flag=1;
           break;
       }
        }
      if(flag==0){
        cout<<0<<'\n';
      }
        
    }


    return 0;
}