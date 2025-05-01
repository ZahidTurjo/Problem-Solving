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
        string a;
        string b;
        cin>>a>>b;
        for(int j=0;j<k;j++){
            int si;
            int sj;
            for(int i=0;i<4;i++){
                if(a[i]=='0'){
                    si=i;
                }
                if(a[i]=='1'){
                    sj=i;
                }
            }
            swap(a[si],a[sj]);

        }
        if(a==b){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }


    }


    return 0;
}