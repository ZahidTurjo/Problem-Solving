#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    string vowels="aeiou";
    while(t--){
        int n;
        cin>>n;
        string res="";

        if(n>5){
            int rem=n%5;
            int x=n/5;
            while(x--){
                res+=vowels;
            }
            for(int i=0;i<rem;i++){
                res+=vowels[i];
            }
        }else{
            for(int i=0;i<n;i++){
                res+=vowels[i];
            } 
        }
        sort(res.begin(),res.end());
        cout<<res<<'\n';

    }

    return 0;
}