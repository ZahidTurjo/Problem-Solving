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
    string s;
    cin>>s;
    set<char>t;
    for(auto c:s){
        t.insert(c);
    }
    vector<char>v;
    for(auto c:t){
        v.push_back(c);
    }
    unordered_map<char,char> mp;
    int sz=v.size();
    for(int i=0;i<sz;i++){
        mp[v[i]]=v[sz-i-1];
    }
    for(auto c:s){
        cout<<mp[c];
    }
    cout<<"\n";
    
   }

    return 0;
}