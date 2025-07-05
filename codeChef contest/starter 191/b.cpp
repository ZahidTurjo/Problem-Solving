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
        for(long long i=1;i<100;i++){
            if(i*i==n){
                cout<<i*i<<'\n';
                break;
            }
            else if (i*i>n){
                cout<<(i-1)*(i-1)<<'\n';
                break;
            }
        }
    }
    

    return 0;
}