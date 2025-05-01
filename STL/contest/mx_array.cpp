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
        vector<int>a(n);
      
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>freq;
        for(int val:a){
            freq[val]++;
        }
        int x=0;
        while(true){
            if(freq[x]>=k){
                freq[x]-=k;
                x++;
            }else{
                break;
            }
        }
        cout<<x<<'\n';
    }

    return 0;
}