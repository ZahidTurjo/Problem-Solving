#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        
        vector<vector<char>>v(n,vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }

        bool triangle=false;
        for(int i=0;i<n;i++){
            int one=0;
            for(int j=0;j<n;j++){
                if(v[i][j]=='1'){
                    one++;
                }
            }
            if(one==1){
                triangle=true;
                break;
            }
        }
        if(triangle){
            cout<<"TRIANGLE"<<'\n';
        }else{
            cout<<"SQUARE"<<'\n';
        }

    }
    

    return 0;
}