#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    
    int vol=a*b*c;
    int vol2=x*x*x;
    if(vol>vol2){
        cout<<"Cuboid"<<'\n';
    }else if(vol<vol2) cout<<"Cube"<<'\n';
    else if(vol==vol2) cout<<"Equal"<<'\n';

    return 0;
}