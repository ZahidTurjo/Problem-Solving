#include<bits/stdc++.h>
using namespace std;
int Ceil(int a,int b){
    
    if((a+b)%2==0){
        return ((a+b)/2);
    }else return ((a+b+1)/2);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long>v(n);
        long long mn_sum=0;
        for(long long i=0;i<n;i++){
            cin>>v[i];
            mn_sum+=v[i];
        }
      
        sort(v.begin(),v.end());
        long long first=v[0];
        long long second=v[1];
        long long tot=0;
       while(k){
             long long x=Ceil(first,second);

         
            if(x<second){
                second=x;
                tot+=x;
            }else{
                tot+=x*k;
                break;
            }
            k--;
       }
      
      
        cout<<mn_sum+tot<<'\n';
    }

    return 0;
}