#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;

        string s=to_string(x);
        bool f[10]={};
        for(auto c :s){
            f[c-'0']=1;
        }
        for(int i=0;i<=9;i++){
            if(f[i]){
                cout<<i<<'\n';
                break;
            }
        }
    }
    
    return 0;
}