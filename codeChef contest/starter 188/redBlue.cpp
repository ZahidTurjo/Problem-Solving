#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r,b,p,q;
    cin>>r>>b>>p>>q;
    int red=r*p;
    int blue=b*q;
    cout<<max(red,blue)<<'\n';

    return 0;
}