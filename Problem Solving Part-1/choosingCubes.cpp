#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin>>n>>f>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int fav=v[f-1];
        int cnt=0;
        for(int i=0;i<n;i++){
            if(v[i]==fav) cnt++;
        }
        sort(v.rbegin(),v.rend());
        int temp_cnt=cnt;
        for(int i=0;i<k;i++){
            if(v[i]==fav) cnt--;
        }
        if(cnt==0)cout<<"YES"<<'\n';
        else if(cnt==temp_cnt) cout<<"NO"<<'\n';
        else cout<<"MAYBE"<<'\n';
    }

    return 0;
} 