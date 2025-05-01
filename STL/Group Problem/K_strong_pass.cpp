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
        int ch[26]={0};
        for(char x:s){
            ch[x-'a']=1;
        }
        int flagg=0;
        for(int i=0;i<s.size()-1;i++){
            
            if(s[i]==s[i+1]){
                for(int j=0;j<26;j++){
                    if(ch[j]==0){
                        s.insert(i+1,1,char(j+'a'));
                        flagg=1;
                        break;
                    }
                }
                break;
            }
        }
        if(flagg==1){
            cout<<s<<'\n';
        }else{
            for(int i=0;i<26;i++){
                if(ch[i]==0){
                    s.push_back(char(i+'a'));
                    break;
                }
            }
            cout<<s<<'\n';
        }
      
    }

    return 0;
}