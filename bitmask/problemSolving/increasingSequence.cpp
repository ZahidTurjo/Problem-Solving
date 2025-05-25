#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){

        long long n;
        cin>>n;
        
        int bits = __lg(n);
      
        deque<long long>v;
        
        for(int i=0;i<=bits;i++){
            if((n>>i)&1){
                long long value=n-(1LL<<i);
                if(value>0){

                    v.push_front(n-(1LL<<i));
                }
            }
                
        }
        v.push_back(n);
        cout<<v.size()<<'\n';
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<'\n';


      
   
   
    }
    return 0;
}