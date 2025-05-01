#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int sm=x+y+z;
        deque<int>dq;
        dq.push_back(x);
        dq.push_back(y);
        dq.push_back(z);
        for(int i=0;i<3;i++){
            sort(dq.rbegin(),dq.rend());
        int score=sm-dq[0];
        dq.pop_front();
        if(dq[0]==dq[1]){
            cout<<dq[0]+dq[1]<<'\n';
        }else if(dq[0]%2==1 && dq[1]%2==1){
            cout<<dq[0]+dq[1]-1<<'\n';
        }else{
            cout<<dq[0]+dq[1]<<'\n';
        }
        }
        sort(dq.rbegin(),dq.rend());
        int score=sm-dq[0];
        dq.pop_front();
        if(dq[0]==dq[1]){
            cout<<dq[0]+dq[1]<<'\n';
        }else if(dq[0]%2==1 && dq[1]%2==1){
            cout<<dq[0]+dq[1]-1<<'\n';
        }else{
            cout<<dq[0]+dq[1]<<'\n';
        }

    }

    return 0;
}