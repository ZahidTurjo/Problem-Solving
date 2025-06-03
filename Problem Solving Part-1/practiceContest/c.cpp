#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int c=1;
        int ans=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                c++;
                ans=max(ans,c);
            }else{
                c=1;
            }
        }
        cout<<ans<<" ";
        for(int i=n;i<(n+m);i++){
            char lettr;
            cin>>lettr;
            s+=lettr;
            if(s[i]==s[i-1]){
                c++;
                ans=max(ans,c);
                cout<<ans<<" ";
            }else{
                c=1;
                cout<<ans<<" ";
            }
        }
        cout<<"\n";
    }
    
    return 0;
}