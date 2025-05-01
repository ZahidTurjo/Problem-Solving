#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        deque<int>dq;
        int q;
        cin>>q;
        while(q--){
            int s;
            cin>>s;
            if(s==1){
                if(!dq.empty()){
                int lastElement=dq.back();
                dq.pop_back();
                dq.push_front(lastElement);
            
            }

            }else if(s==2){
                if(!dq.empty()){
                reverse(dq.begin(),dq.end());
              
            }

            }else if(s==3){
                int k;
                cin>>k;
                dq.push_back(k);
               
            }
            long long sum=0;
            
            for(int i=0;i<dq.size();i++){
                sum+=(dq[i]*(i+1));
            }
            cout<<sum<<'\n';
        }
    }

    return 0;
}