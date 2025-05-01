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
            for(int j=0;j<n;j++){
                int val;
                cin>>val;
                a.push_back(val);
            }
            v.push_back(a);
        }

        set<int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mp.find(v[i][j])==mp.end()){
                    ans.push_back(v[i][j]);
                    mp.insert(v[i][j]);
                }

            }
        }
        vector<int>frq(2*n+1);
        for(auto val:ans){
            frq[val]=1;
        }
        for(int i=1;i<=2*n;i++){
            if(frq[i]==0){
                cout<<i<<" ";
            }
        }
        for(auto val:ans){
            cout<<val<<" ";
        }
        cout<<'\n';


    }

    return 0;
}