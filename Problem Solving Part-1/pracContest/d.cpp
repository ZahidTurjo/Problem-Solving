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
       unordered_map<int,int>f;

       for(int i=0;i<n;i++){
        int x;
        cin>>x;

        f[x]++;
       }
       int stay=0;
       int zero=0;
       for(auto [x,y]:f){
        if(x!=0){
            stay +=y%2;
            zero+=y/2;
        }else{
            zero=y;
        }
       }
       if(zero>0){
        stay+=1;
       }
      
        cout<<stay<<'\n';
    }

    return 0;
}