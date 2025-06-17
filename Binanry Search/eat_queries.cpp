#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());

    vector<int>pre_sum(n);
   
    pre_sum[0]=a[0];
    for(int i=1;i<n;i++){
        pre_sum[i]=pre_sum[i-1]+a[i];
    }
    for(int i=0;i<q;i++){
        int k;
        cin>>k;
        auto it=lower_bound(pre_sum.begin(),pre_sum.end(),k);
        if(it==pre_sum.end()){
            cout<<-1<<'\n';
        }
        else{
            cout<<(it-pre_sum.begin())+1<<'\n';
        }
   
    }
    }
    return 0;
}