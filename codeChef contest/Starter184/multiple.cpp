#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    
    int res;
    if(n%3==0){
        res=n;
    }else if(n%3==1){
        res=n-1;
    }else if(n%3==2){
        res=n+1;
    }
    cout<<res<<'\n';

    return 0;
}