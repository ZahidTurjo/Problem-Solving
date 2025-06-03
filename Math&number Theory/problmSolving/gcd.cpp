#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    return __gcd(a,b);
}
int LCM(int a,int b){
    return (a*b/__gcd(a,b));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
cout<<GCD(50,7)<<endl;
cout<<LCM(16,24)<<endl;



    return 0;
}