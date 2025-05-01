#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int wheel;
        cin>>wheel;
        vector<int>v(wheel);
        for(int i=0;i<wheel;i++){
            cin>>v[i];
        }
        for(int i=0;i<wheel;i++){
            int x;
            cin>>x;
            char c;
            for(int j=0;j<x;j++){
                cin>>c;
                if(c=='D'){
                    if(v[i]==9){
                        v[i]=0;
                    }else{
                        v[i]+=1;
                    }
                }else{
                    if(v[i]==0){
                        v[i]=9;
                    }else{
                        v[i]-=1;
                    }
                }
            }
        }

        for(auto val:v){
            cout<<val<<" ";
        }
            
        cout<<endl;
}

    return 0;
}