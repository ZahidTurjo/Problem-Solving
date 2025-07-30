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
        vector<int>v(n);

        bool scholar=true;
        double sum=0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            
        }
        for(int i=0;i<n;i++){
            sum+=v[i];
            double avg=sum/(i+1);
            if(avg<40){
                scholar=false;
            }
            
        }
       
        if(scholar){
            cout<<"YES"<<'\n';
        }else cout<<"NO"<<'\n';
    }
    

    return 0;
}