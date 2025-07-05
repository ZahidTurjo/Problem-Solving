#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
    
        if( a>0 && a%2==0){
            int sum=a+b*2;
            if(sum%2==0){
                cout<<"YES"<<'\n';
            }
            
        }
        
       else if(2*b==a){
            cout<<"YES"<<'\n';
        }
        else if(a%2==0 && b==0){
            cout<<"YES"<<'\n';
        }else if(a==0 && b%2==0){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
    }
    

    return 0;
}