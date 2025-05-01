#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    auto it=v.begin();
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<'\n';
    }

    return 0;
}
