#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int bits=0;
        while((1<<bits)<=n){
            
            // cout<<bits<<endl;
            bits++;
        }
        // cout<<"af-loop"<<bits<<endl;
        int a=(1<<bits-1);
        int b=a^n;
        cout<<b<<" "<<a<<endl;
    }

    return 0;
}