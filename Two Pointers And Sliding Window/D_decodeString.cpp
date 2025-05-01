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
        int l=n-1;
        int r=n-1;
        string ans="";
        while(l>=0){

            if(s[l]=='0'){
                string numStr = s.substr(l - 2, 2);
                int num=stoi(numStr);
                char c=char((num-1)+'a');
                ans+=c;
                l-=3;
            }else{
                char ch=s[l];
                int num=ch-'0';
                char c=char((num-1)+'a');
                ans+=c;
                l--;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<'\n';
    }

    return 0;
}