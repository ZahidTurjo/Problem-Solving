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

        map<char,int>mp;
        if(s[0]=='1'){
            mp['1']++;
        }if(s[0]=='0'){
            mp['0']++;
        }
        for(int i=1;i<n;i++){
            if(s[i]=='1'){
                mp['1']++;
            }if(s[i]=='0'&& s[i-1]=='1'){
                mp['0']++;
            }
        }
   if(mp['1']>mp['0']){
    cout<<"Yes"<<'\n';
   }else{
    cout<<"NO"<<'\n';
   }
    }

    return 0;
}