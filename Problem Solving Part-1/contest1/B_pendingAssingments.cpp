#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int day_min=z*60*24;
        int taken_min=x*y;
        if(taken_min<=day_min){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
    }

    return 0;
}