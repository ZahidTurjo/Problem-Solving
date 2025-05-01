#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>mx;
        for(int i=0;i<n;i++){
            if(i%2==0){
                mx.push_back(v[i]);
            }
        }
        cout<<*max_element(mx.begin(),mx.end())<<'\n';
    }

    return 0;
}