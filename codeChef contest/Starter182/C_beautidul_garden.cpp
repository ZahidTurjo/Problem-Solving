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
        queue<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push(x);
        }
        if(v.size()==k){
            cout<<0<<'\n';
            continue;
        }
        int cnt=0;
        for(int i=0;i<d;i++){
          int first=v.front();
          v.pop();
          if(first<=d){
            cnt++;
            v.push(first);
          }
          if(v.size()<k){
            break;
          }
        }
        cout<<cnt<<endl;
    }

    return 0;
}