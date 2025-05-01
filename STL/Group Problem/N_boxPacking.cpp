#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        mp[val]++;
    }
    int mx=INT_MIN;
   for(auto[key,val]:mp){
    if(mx<val){
        mx=val;
    }
   }
   cout<<mx<<'\n';
    


    return 0;
}