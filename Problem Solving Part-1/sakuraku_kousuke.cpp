#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int cordinate=0;
        string winner="";
        for(int i=1;i<=100;i++){
            int mv=2*i-1;
          
            if(i%2==1){
                 if(cordinate-mv<-n){
                break;
            }
                
                cordinate=cordinate-mv;
                // cout<<"saku"<<"-->>"<<cordinate<<'\n';
                winner="Kosuke";
            }else{
                  if(cordinate+mv>n){
                break;
            }
                cordinate=cordinate+mv;
                // cout<<"kaku"<<"-->>"<<cordinate<<'\n';
                winner="Sakurako";
            }
        }
        cout<<winner<<'\n';

    }
    

    return 0;
}