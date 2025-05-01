#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int robin_gold=0;
        int give_gold=0;
        for(int i=0;i<n;i++){
            if(v[i]>=k){
                robin_gold+=v[i];
            }
            if(robin_gold>0){
                
                if(v[i]==0){
                    give_gold+=1;
                    robin_gold-=1;
                }
            }
        }
        cout<<give_gold<<'\n';
    }

    return 0;
}