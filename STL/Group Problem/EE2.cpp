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
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            vector<int>a;
            for(int j=0;j<n-1;j++){
                int val;
                cin>>val;
                a.push_back(val);
            }
            v.push_back(a);
        }
        vector<int>serial;
      
        int idx;
        int val;
        int idx_val;
        for(int i=0;i<n;i++){
         
         serial.push_back(v[i][0]);
        }
       vector<int>freq(n+1,0);
       for(int i=0;i<n;i++){
        freq[serial[i]]++;
       }

    // for(auto x:serial){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    for(int i=1;i<=n;i++){
        
        // cout<<freq[i]<<" ";
        if(freq[i]==n-1){
            val=i;
        }
        if(freq[i]==1){
            idx_val=i;
        }

       
    }
    for(int i=0;i<n;i++){
        if(serial[i]==idx_val){
            idx=i;
        }
    }
    cout<<val<<" ";
    for(int i=0;i<n-1;i++){
        cout<<v[idx][i]<<" ";
    }
     cout<<'\n';

    }

    return 0;
}