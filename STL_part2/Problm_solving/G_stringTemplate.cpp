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

        vector<int>v(n);
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            cin>>v[i];
            freq[v[i]]++;
        }
        vector<pair<int,int>>a;
        for(int i=0;i<n;i++){
            a.push_back({v[i],freq[v[i]]});
        }
        int m;
        cin>>m;
        while(m--){
            string s;
            cin>>s;
            if(s.size()!=n){
                cout<<"NO"<<'\n';
                continue;
            }
            unordered_map<char,int>freqS;
            for(char x:s){
                freqS[x]++;
            }
            vector<pair<char,int>>st;
            for(int i=0;i<s.size();i++){
                st.push_back({s[i],freqS[s[i]]});
            }
            bool found=true;
            if(a.size()==st.size()){
                for(int i=0;i<a.size();i++){
                    if(a[i].second !=st[i].second){
                        found=false;
                        break;
                    }
                }
            }
            if(found){
                cout<<"YES"<<'\n';
            }else{
                cout<<"NO"<<'\n';
            }
          
        }
    }

    return 0;
}
