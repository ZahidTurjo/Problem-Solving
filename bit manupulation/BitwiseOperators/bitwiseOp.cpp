#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a=5,b=14;
    int ans=(a&b);
    int ans1=(a|b);
    int ans2=(a^b);
    cout<<ans1<<endl;
    cout<<ans<<endl;
    cout<<ans2<<endl;

    cout<<endl;
    cout<<"left shift"<<'\n';
    int res=(11<<1);
    cout<<res<<endl;
    cout<<endl;
    cout<<"right shift"<<'\n';
    int res1=(11>>1);
    cout<<res1<<endl;

    return 0;

}