#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin>>x;
    while (x--)
    {
        int n;
        cin>>n;
        string s ,t ;
        cin>>s>>t;
        if(s[0]!=t[0]){
            cout<<-1<<'\n';
        }else{
            vector<int>ans;
            for(int i=1;i<n;i++){
                if(s[i]=='0'&&s[i-1]=='1'){
                    s[i]='1';
                    ans.push_back(i);
                }
            }
            bool possible=true;
            for(int i=n-1;i>0;i--){
                if(s[i]!=t[i]){
                    if(s[i-1]=='1'){
                        s[i]=t[i];
                        ans.push_back(i);
                    }else{
                        possible=false;
                    }
                }
            }
            if(!possible){
                cout<<-1<<'\n';
            }else{
                cout<<ans.size()<<'\n';
                for(auto z: ans){
                    cout<<z<<" ";
                }
                cout<<'\n';
            
            }
        }

    }
    

    return 0;
}