#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        bool pos=false, neg=false;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>0)pos=true;
            if(v[i]<0)neg=true;
        }
        sort(v.begin(),v.end());
        if(pos){
            cout<<v[n-1]<<" "<<v[n-1]<<endl;
        }else if(neg){
            
            cout<<v[0]<<" "<<v[0]<<endl;
        }
        else{
            cout<<-1<<endl;

        }
    }

    return 0;
}