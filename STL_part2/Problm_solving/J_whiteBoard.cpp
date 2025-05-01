#include<bits/stdc++.h>
using namespace std;
int ceil(int a,int b){
    if(a%b==0)
    {
        return a/b;
    }else{
        return (a/b)+1;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<2<<'\n';
        int res=n;
        int first=n-1;
        
        while(first>0){
            cout<<first<<" "<<res<<'\n';
            res=ceil(first+res,2);
            first--;

        }


    }
    

    return 0;
}
