#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=6;
    for(int i =1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i !=n/i)
                cout<<i<<"x"<<n/i<<endl;
            else cout<<i<<endl;
        }
    }
    return 0;
}