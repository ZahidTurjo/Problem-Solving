#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int red=0,blue=0,zero=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1)red++;
            else if(v[i]==2)blue++;
            else zero++;

        }
        if(n%2!=0){
            cout<<"NO"<<'\n';
            continue;
        }
        int balance=n/2;
        int red_bl=balance-red;
        int blue_bl=balance-blue;
        if(red_bl<0 || blue_bl<0 || blue_bl+red_bl !=zero){
            cout<<"NO"<<'\n';
        }else cout<<"YES"<<'\n';
    }
    

    return 0;
}