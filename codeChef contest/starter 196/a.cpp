#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;
    if(a*3<=b){
        cout<<"Rain"<<'\n';
    }else{
        cout<<"Dry"<<'\n';
    }
    return 0;
}