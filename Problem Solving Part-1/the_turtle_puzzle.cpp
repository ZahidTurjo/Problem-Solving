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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(v[i]<0){
                sum+=(v[i]*-1);
            }else{
                sum+=v[i];
            }
        }
        cout<<sum<<'\n';
    }

    return 0;
}
