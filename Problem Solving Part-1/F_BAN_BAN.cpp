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
        if(n%2==0){
            cout<<n/2<<'\n';
            for(int i=1,j=(n*3);i<j;i+=3,j-=3){
                
                    cout<<i<<" "<<j<<" ";
               
            }
            cout<<'\n';
        }else if(n%2==1){
            cout<<(n/2)+1<<'\n';
            for(int i=1,j=(n*3);i<j;i+=3,j-=3){
               
          
                    cout<<i<<" "<<j<<" ";
              
            
            }
              cout<<'\n';
        }
    }

    return 0;
}
