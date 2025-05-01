#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,cutomer_no=1;
    cin>>t;
    set<pair<int,int>>st;
    multiset<pair<int,int>>mt;
    vector<int>v;
    for(int i=1;i<=t;i++){
        int type,money;
        cin>>type;
        if(type==1){
            cin>>money;
            st.insert({cutomer_no,money});
            mt.insert({money,-cutomer_no});
            cutomer_no++;

        }
        else if(type==2){
        int pos=st.begin()->first,money=st.begin()->second;
        v.push_back(pos);
        st.erase(st.begin());
        mt.erase({money,-pos});
        }else{
            int pos=-mt.rbegin()->second, money=mt.rbegin()->first;
            v.push_back(pos);
            mt.erase(--mt.end());
            st.erase({pos,money});
            
        }
        
    }
    for(auto val: v){
        cout<<val<<" ";
    }

    return 0;
}