#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> lf(n);
        vector<int> rg(m);
        for(int i=0;i<n;i++){
            cin>>lf[i];
        }
        for(int i=0;i<m;i++){
            cin>>rg[i];
        }

        int sm=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int sum=lf[i]+rg[j];
                if(sum<=k){
                    sm++;
                }
            }
        }
        cout<<sm<<'\n';
    }

    return 0;
}