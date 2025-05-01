#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        vector<int>v;
        // for(auto x:s){
        //     if(x!='0'){
        //         v.push_back(x-'0');
        //     }
        // }
        

        int n=s.size();
        if(s[n-1]=='0'){
         if(s[n-2]!='0'){
            v.push_back(0);
         }
        }
        // cout<<s[n-1]<<" ->"<<s[n-2];
        // for(auto x:v){
        //     cout<<x<<" ";
        // }
        cout<<v.size()-1<<'\n';
    }



    return 0;
}