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
        vector<int>v;
        unordered_set<char>st;
        string unique_string="";
        
        for(auto c:s){
            if(st.count(c)==0){
                st.insert(c);
                unique_string+=c;
                
            }
        }

        sort(unique_string.begin(),unique_string.end());

        unordered_map<char,char>mp;
        int sz=unique_string.size();

        for(int i=0;i<sz;i++){
                mp[unique_string[i]]=unique_string[sz-i-1];
            
        }
        for(auto val:s){
            cout<<mp[val];
        }
        cout<<'\n';
    }

    return 0;
}