#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a,b;
    cin>>a>>b;
    
    int boy=(a+1)*4;
    int girl=b*3;

    cout<<ceil((boy+girl)/8.0)<<'\n';


    return 0;
}