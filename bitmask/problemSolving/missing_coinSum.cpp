#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    sort(v.begin(),v.end());
 
  long long sum=0;
    for(int i=0;i<n;i++){
       
        if((v[i]>sum+1)){
   
            break;
        }
             sum+=v[i];
        
    }
    cout<<sum+1<<'\n';


    return 0;
}