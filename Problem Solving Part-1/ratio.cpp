#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;

        if(x>=2*y){
            cout<<0<<'\n';
            continue;
        }
        if(y>=2*x){
            cout<<0<<'\n';
            continue;
        }
        int mn=min(x,y);
        int mx=max(x,y);

        int res=abs(mx-mn*2);
        int res2=abs((mx/2)-mn);
        cout<<min(res,res2)<<'\n';






    }
    
    
 

    return 0;
}