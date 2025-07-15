#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        unordered_map<char,int>cnt;
        for(char i='A';i<='G';i++){
            cnt[i]=0;
        }
        for(char c: s){
            cnt[c]++;
        }
        int needPrblm=0;
        for(char i='A';i<='G';i++){
            if(m>cnt[i]){
                needPrblm+=m-cnt[i];  //given 1 but round 2 ,need=2-1=1
            }
        }
        cout<<needPrblm<<'\n';
    }

    return 0;
}