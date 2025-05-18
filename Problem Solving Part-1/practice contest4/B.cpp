#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        if(s[0]=='0'){
            cout<<"NO"<<'\n';
     
    
        }else{
        int swipe=0;
        bool sp=true;
        for(int i =0;i<n;i++){
            if(s[i]=='1'){
                swipe=x;
            }
            else {
                if(swipe==0){
                    sp=false;

                    break;
                }
                swipe--;
            }
        }
        if(sp)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }

    }

    return 0;
}