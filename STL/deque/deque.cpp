#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    deque<int> dq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        dq.push_back(x);
    }
    dq.push_front(100);
 for(auto value:dq){
    cout<<value<<endl;
 }
cout<<dq.front()+1<<endl;

    return 0;
}