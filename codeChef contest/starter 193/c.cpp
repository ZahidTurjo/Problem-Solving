#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==0){
            cout<<"NO"<<'\n';
            continue;
        }
        if(a>0 && b%a==0){
            cout<<"Yes"<<'\n';
        }else{
             cout<<"NO"<<'\n';
        }
    }
    

    return 0;
}