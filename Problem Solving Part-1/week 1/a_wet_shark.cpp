#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long sum=0;
    long long max_sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
       
    }
    if(sum%2==0){
        cout<<sum<<endl;
    }else{
        long long max_sum=LLONG_MIN;
        for(int i=0;i<n;i++){
            long long res=sum-v[i];
            if(res%2==0){
                max_sum=max(max_sum,res);
            }
        }
        cout<<max_sum<<endl;
    }
    
}