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
        vector<int>v(n);
        unordered_set<int>st;

        for(int i=0;i<n;i++){
            cin>>v[i];
            st.insert(v[i]);
        }
        bool found=false;
        for(int i=0;i<n && !found;i++){
            for(int j=0;j<n;j++){
                int sum=v[i]+v[j];
                if(st.find(sum)==st.end()){
                    cout<<v[i]<<" "<<v[j]<<'\n';
                    found=true;
                    break;
                }
                
            }
           
        }
        if(!found){
            cout<<-1<<'\n';
        }


        
    }



    return 0;
}