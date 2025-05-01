#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
   vector<string>v;
    for(int i=0;i<n;i++){
       string name;
       cin>>name;
       v.push_back(name);
    }
    unordered_set<string>mp;
    vector<string>s;

    reverse(v.begin(),v.end());
    for(int i =0;i<n;i++){
        if(mp.find(v[i])==mp.end()){
            mp.insert(v[i]);
            s.push_back(v[i]);
        }
    }
    for(auto val:s){
        cout<<val<<'\n';
    }

    return 0;
}