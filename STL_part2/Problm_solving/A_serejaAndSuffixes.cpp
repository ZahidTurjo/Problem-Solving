#include<bits/stdc++.h>
using namespace std;
void TurSolve(){

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<int>freq(n+1);
    set<int>st;
    for(int i=n;i>=1;i--){
        st.insert(v[i]);
        freq[i]=st.size();
    }
    while(m--){
        int l;
        cin>>l;
        // set<int>st;
        // for(int i=l;i<=n;i++){
        //     st.insert(v[i]);
        // }
        // cout<<st.size()<<'\n';
        cout<<freq[l]<<'\n';

    }

    return 0;
}