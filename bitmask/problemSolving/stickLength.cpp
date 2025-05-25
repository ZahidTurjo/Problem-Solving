#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        
    }
    sort(v.begin(),v.end());
    int avg=n/2;
    long long res=v[avg];

    long long op=0;
    for(int i=0;i<n;i++){
        op+=abs(v[i]-res);
    }
    cout<<op<<'\n';



    return 0;
}