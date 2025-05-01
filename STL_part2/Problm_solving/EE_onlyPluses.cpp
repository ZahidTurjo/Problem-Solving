#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int mx_product=INT_MIN;

        for(int i=0;i<=5;i++){
            for(int j=0;j<=5-i;j++){
                for(int k=0;k<=5-i-j;k++){

                    
                    int q=a+i;
                    int r=b+j;
                    int s=c+k;
                    int pro=q*r*s;
                    // cout<<pro<<endl;
                    mx_product=max(mx_product,pro);
                }

                
            }
        }
        cout<<mx_product<<'\n';
    }

    return 0;
}