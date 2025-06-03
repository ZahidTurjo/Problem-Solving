#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin>>n>>k;

    vector<long long>diviors;
    for(long long i=1;i*i<=n;i++){
        if(n%i==0){
            diviors.push_back(i);
            if(i!=n/i) diviors.push_back(n/i);
        }
    }
    sort(diviors.begin(),diviors.end());
    if(diviors.size()<k){
        cout<<-1<<'\n';
    }else cout<<diviors[k-1]<<'\n';

    return 0;
}