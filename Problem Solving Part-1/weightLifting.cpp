#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int sum=0;
    for(int i=0;i<5;i+=2){
        sum+=max(v[i],v[i+1]);
    }
    cout<<sum<<'\n';

    return 0;
}