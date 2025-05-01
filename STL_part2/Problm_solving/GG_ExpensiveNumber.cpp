#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int idx=n-1,ans=0;
        for(int i=n-1;i>=0;i--){
            int num=s[i]-'0';
            if(num>=1){
                idx=i;
                break;
            }
            else{
                ans++;
            }
        }
        for(int i=0;i<idx;i++){
            if(s[i]!='0'){
                ans++;
            }
        }
        cout<<ans<<'\n';

    }

    return 0;
}