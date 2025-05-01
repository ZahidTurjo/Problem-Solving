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
        int res=100-n;
        cout<<(res/10)*10<<'\n'; 
    }


    return 0;
}