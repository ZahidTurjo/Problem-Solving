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
      vector<int>v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }

      int mx=INT_MIN;
      for(int i=1;i<=100;i++){
        int total=0;
        for(int j=0;j<n;j++){
            total+=min(i,v[j]);
        }
        int rev=total*50;
        int c=n*i*30;
        int pro=rev-c;
        mx=max(mx,pro);
      }
      cout<<mx<<'\n';

     
    }
    

    return 0;
}