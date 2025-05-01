#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,d;
        cin>>n>>k>>d;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v[i]=x;
        }
        if(v.size()==k){
            cout<<0<<'\n';
            continue;
        }
        int cnt=0;
        vector<int>nextDaypluck(n,0);
        for(int i=1;i<=d;i++){
            int canPluck=n-k;
            int pluck=0;
          for(int j=0;j<n;j++){
            if(nextDaypluck[j]<=d && pluck<canPluck){
                nextDaypluck[j]=v[j]+v[j];
                cnt++;
                pluck++;
            }
            
          }
    }
    cout<<cnt<<'\n';

}
    return 0;

}