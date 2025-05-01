#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, c;
        cin>>n>>c;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            v[i]=v[i]+i+1;
        }
        
        for(int i=0;i<n;i++){
            sum+=v[i];
            if(sum>c){
                cout<<i<<'\n';
                break;
            }
        }
    }

    return 0;
}