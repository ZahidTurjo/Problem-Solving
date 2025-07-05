#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0,b=0;
        for(auto c:s){
            if(c=='A'){
                a++;
            }else if(c == 'B'){
                b++;
            }
        }
       if(a>b){
        cout<<"A"<<'\n';
       }else{
        cout<<"B"<<'\n';
       }
    }

    return 0;
}