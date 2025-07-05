#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int L,R;
        cin>>L>>R;
        vector<int>a;
        for(int i=l;i<=r+1;i++){
            a.push_back(i);
        }
        vector<int>b;
        for(int i=L;i<=R;i++){
            b.push_back(i);
        }
        int ans=0;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                if(a[i]==b[j]){
                    ans++;
                }
            }
        }
        if(l==L && r==R){
            cout<<ans-1<<'\n';
        }else cout<<ans<<'\n';
        

    }

    return 0;
}
