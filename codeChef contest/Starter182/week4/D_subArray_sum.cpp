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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int curr_sum=0,max_sum=0,curr_ans=0,min_ans=INT_MAX;
        for(int i=0;i<n;i++){
           curr_sum+=a[i];
           if(a[i]<0){
            curr_ans++;
           }
           if(curr_sum<0){
            curr_sum=0;
            curr_ans=0;
           }
          
           if(curr_sum>max_sum){
            max_sum=curr_sum;
            min_ans=curr_ans;
           }else if(curr_sum==max_sum){
            min_ans=min(curr_ans,min_ans);
           }
        }
       if(max_sum==0)min_ans=0;
        cout<<min_ans<<'\n';
       
        
    }

    return 0;
}