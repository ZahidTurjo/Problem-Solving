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
        int breaks=0;
        
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            breaks+=(val-1);
        }
        cout<<breaks<<'\n';
    }


    return 0;
}