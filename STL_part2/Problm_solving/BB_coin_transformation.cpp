#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        ll cnt=0;
        stack<pair<ll,ll>>st;
        st.push({n,1});
        while(!st.empty()){
            auto [x,freq]=st.top();
            st.pop();
            if(x<=3){
                cnt+=freq;
            }else{
                long long y=x/4;
                st.push({y,freq*2});
                // st.push(y);
            }
        }
        cout<<cnt<<'\n';

        
    }

    return 0;
}