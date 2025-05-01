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
        vector<int>a(n);
        int ida=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       map<int ,int>mpA;
        vector<int>freA(n);
        for(int i=0;i<n;i++){
            if(mpA.find(a[i])==mpA.end()){
                mpA[a[i]]=ida++;
            }
            freA[i]=(mpA[a[i]]);
        }
        // for(auto [x,y]:mpA){
        //     cout<<x<<"->"<<y<<endl;
        // } 
        // for(auto val: freA){
        //     cout<<val<<" ";
        // }
        int m;
        cin>>m;
        while(m--){
            string s;
            cin>>s;
            if(s.size()!=n){
                cout<<"NO"<<'\n';
                continue;
            }
            map<char ,int>mpS;
            vector<int>freS(n);
            int ids=0;
            for(int i=0;i<n;i++){
                if(mpS.find(s[i])==mpS.end()){
                    mpS[s[i]]=ids++;
                }
                freS[i]=(mpS[s[i]]);
            }
            if(freA==freS){
                cout<<"YES"<<'\n';
            }else{
                cout<<"NO"<<'\n';
            }
        }

    }

    return 0;
}