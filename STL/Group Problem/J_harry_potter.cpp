#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    unordered_map<string,int>mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(mp.find(s)==mp.end()){
            mp[s]=0;
            cout<<"NO"<<'\n';
        }else{
            cout<<"YES"<<'\n';
        }
    }


    return 0;
}