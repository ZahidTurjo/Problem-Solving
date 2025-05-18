#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        char c[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
            'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
           
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<char>ans;
        map<char,int>mp;
        int char_idx=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                ans.push_back(c[char_idx]);
                mp[c[char_idx]]++;
                char_idx++;
            }else{
                for(auto [x,y]:mp){
                    if(v[i]==y){
                        ans.push_back(x);
                        mp[x]++;
                        break;
                    }
                }
            }

        }
        for(auto c:ans){
            cout<<c;
        }
        cout<<endl;

    }

    return 0;
}