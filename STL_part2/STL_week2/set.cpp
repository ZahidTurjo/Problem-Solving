#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    auto it=s.begin();
    cout<<*(it)<<endl;

    return 0;
}