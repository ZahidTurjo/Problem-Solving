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
        int zero=0;
        int one=0;
        if(n==1){
            cout<<0<<'\n';
            continue;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]=='1'&&s[i+1]=='0'){
                zero++;
            }
            if(s[i]=='0'&&s[i+1]=='1'){
                one++;
            }
        }
        cout<<max(one,zero)<<endl;
    }

    return 0;
}