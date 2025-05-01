#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    multiset<int>st;
 
    for(int i=1;i<=n;i++){
        int val;
        cin>>val;
        st.insert(val);
    }
   

    int cnt=0,prob=1;
    while(!st.empty()){
        auto it=st.lower_bound(prob);
        if(it !=st.end()){
            cnt++;
            st.erase(it);
        }else{
            break;
        }
        prob++;
    }
    cout<<cnt<<'\n';

    return 0;
}