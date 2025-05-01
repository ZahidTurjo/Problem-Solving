#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
//    a.erase(remove(a.begin(),a.end(),x),a.end());
    vector<int>v;
    for(int i=0;i<n;i++){
        if(a[i]!=x){
            v.push_back(a[i]);
        }
    }

    for(auto val:v){
        cout<<val<<" ";
    }

    return 0;
}