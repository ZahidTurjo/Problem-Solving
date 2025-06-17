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
        vector<int>a(n);
        int one=0,zero=0,two=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%3==0){
                zero++;
            }
            else if(a[i]%3==1){
                one++;
            }
            else two++;
        }
        if(zero>0 || one>=3||two>=3){
            cout<<"YES"<<'\n';
        }
        else if(one>=1 && two>=1){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
    }


    return 0;
}