#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
      int n;
      cin>>n;
      set<int>s;
     
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
        
      }
       int one=0;
      int dis=0;
      for(auto x:s){
        
        if(x==1){
            one=1;
        }else if(x!=1){
            dis++;
        }
      }
      cout<<dis+one<<'\n';
    }
    
    return 0;
}