#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
       int n,c;
       cin>>n>>c;
       vector<int>f(n);
       for(int i=0;i<n;i++){
        cin>>f[i];
       }
        int need=0;
       while(true){
        int cooki=c+need;
        bool less=false;
        bool equal=false;
        for(int i=0;i<n;i++){
            if(f[i]<cooki){
                less=true;
            }if(f[i]==cooki){
                equal=true;
            }
        }
        if(less && !equal){
            cout<<need<<'\n';
            break;
        }
        need++;
    }
           
    
       
    }
    

    return 0;
}