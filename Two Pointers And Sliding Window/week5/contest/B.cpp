#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        double h,x,y;
        cin>>h>>x>>y;
      
        double res=ceil((h-y)/x);
  
        cout<<res+1<<'\n';
    }

    return 0;
}