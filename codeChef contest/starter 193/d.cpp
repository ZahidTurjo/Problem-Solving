#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
      int n,k;
      cin>>n>>k;
      vector<int>v;
      for(int i=n;i>0;i--){
        v.push_back(i);
      }
      for(auto x:v){
        cout<<x<<" ";
      }
      cout<<'\n';
    }
    

    return 0;
}