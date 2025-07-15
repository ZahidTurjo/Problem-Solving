#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int mn=0;
        bool change=true;
        for(int i=0;i<n;i++){
          if(v[i]<=d){
            if(!change){
                mn++;
                change=true;
            }
          }else{
            if(change){
                mn++;
                change=false;
            }
          }
        }
        cout<<mn<<'\n';
    }

    return 0;
}