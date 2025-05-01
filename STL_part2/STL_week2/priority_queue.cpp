#include<bits/stdc++.h>
using namespace std;

int main(){
    // priority_queue<int>pq;
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);
    pq.push(4);
    pq.push(5);
    pq.push(2);
    pq.push(7);
    pq.push(9);
    // for(int i=0;i<6;i++){
    //    cout<<pq.top()<<" ";
    //     pq.pop();
    // }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }


    return 0;
}