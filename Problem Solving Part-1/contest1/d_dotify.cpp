#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        
        vector<int>len;
        for(int i=0;i<n;i++){
            int m,lan;
            cin>>m>>lan;
            if(lan==l){
                len.push_back(m);
            }
        }
        int length=len.size();
        if(length<k){
            cout<<-1<<'\n';
            continue;
        }
        sort(len.rbegin(),len.rend());
        int mx_len=0;
        for(int i=0;i<k;i++){
            mx_len+=len[i];
        }
        cout<<mx_len<<'\n';

    }
    return 0;
}