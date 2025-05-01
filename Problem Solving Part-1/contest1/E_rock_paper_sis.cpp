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
        string a, b;
        cin>>a>>b;
        int a_win=0;
        int b_win=0;
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                continue;
            }
            if(a[i]=='R' && b[i]=='S'){
                a_win++;
            }
           else if(a[i]=='R'&& b[i]=='P'){
            b_win++;
           }else if(a[i]=='S'&& b[i]=='R'){
            b_win++;
           }else if(a[i]=='S'&&b[i]=='P'){
            a_win++;
           }else if(a[i]=='P'&& b[i]=='S'){
            b_win++;
           }else if(a[i]=='P'&& b[i]=='R'){
            a_win++;
           }
        }
        if(a_win>b_win){
            cout<<0<<'\n';
        }else if(a_win<b_win){
            cout<<((b_win-a_win)/2)+1<<'\n';
        }else{
            cout<<1<<'\n';
        }
    }

    return 0;
}