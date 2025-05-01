#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,t;
    cin>>a>>b>>t;
    int tot_bis=0;
    int time=a;
   
    for(int i=a;i<=t+0.5;i+=a){
        tot_bis+=b;
    }
    cout<<tot_bis<<endl;

    return 0;
}