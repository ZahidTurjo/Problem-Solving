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
        string s,t;
        cin>>s>>t;

        int s_1=0,t_0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                s_1++;
            }
            if(t[i]=='0'){
                t_0++;
            }
        }
        if(s_1%2==1){
            if(s_1-1==t_0){
                cout<<"YES"<<endl;
               }else{
                cout<<"NO"<<endl;
               }
        }else {

        
    if(s_1==t_0 && s_1!=0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        }

    }

    return 0;
}