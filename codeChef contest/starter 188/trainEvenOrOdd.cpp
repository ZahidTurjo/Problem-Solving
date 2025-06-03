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
        int even=0;
        int odd=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                even+=v[i];
            }else{
                odd+=v[i];
            }
        }
        cout<<max(even,odd)<<'\n';
    }

    return 0;
}