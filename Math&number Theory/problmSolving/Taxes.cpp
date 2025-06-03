#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
        if(isPrime(n)){
            cout<<1<<'\n';
        }
        else{
            if(n%2==0){
                cout<<2<<'\n';
            }else if(n%2==1){
                long long x=n-2;
                if(isPrime(x)){
                    cout<<2<<'\n';
                }else{
                    cout<<3<<'\n';
                }
            }
        }
    return 0;
}