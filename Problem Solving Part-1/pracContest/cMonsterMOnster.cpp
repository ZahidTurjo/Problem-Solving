#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;

        vector<long long>v(n);

        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        long long mx=INT_MIN;
        for(long long i=0;i<n;i++){
            v[i]=v[i]+x*(i);
            mx=max(v[i],mx);

        }
        cout<<mx<<'\n';
    }

    return 0;
}