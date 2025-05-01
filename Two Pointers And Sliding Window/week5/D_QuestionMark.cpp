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
        string s;
        cin>>s;
        int a=0,b=0,c=0,d=0;
        int ans=0;
        for(char x:s){
            if(x=='A'){
                a++;
            }
            else if(x=='B'){
                b++;
            }else if(x=='C'){
                c++;
            }else if(x=='D'){
                d++;
            }
        }
      ans=min(a,n)+min(b,n)+min(c,n)+min(d,n);
      cout<<ans<<'\n';
    }

    return 0;
}