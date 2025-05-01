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
        bool found=false;
        for(int i=n;i>=3;i--){
            int a=i;
            int b=i-1;
            int c=i-2;
            if(b+c>a){
                cout<<a+b+c<<'\n';
                found=true;
                break;
            }
        }
        if(!found){
            cout<<-1<<'\n';
        }

    }

    return 0;
}