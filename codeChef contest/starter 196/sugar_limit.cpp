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
        vector<int>t(n);
        vector<int>s(n);
        if(n==1){
            cout<<0<<'\n';
            continue;
        }
        for(int i=0;i<n;i++){
            cin>>t[i];
        }
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        // int l=*max_element(s.begin(),s.end());
        int mx_statis=INT_MIN;
        for(int l=1;l<=100;l++){
            int total_taste=0;
            for(int i=0;i<n;i++){
                if(s[i]<=l && t[i]>0){
                    total_taste+=t[i];
                }
            }
            int satits=total_taste-l;
            mx_statis=max(satits,mx_statis);


        }
        cout<<mx_statis<<'\n';
    }

    return 0;
}