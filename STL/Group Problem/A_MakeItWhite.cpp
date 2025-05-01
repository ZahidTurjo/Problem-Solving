#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int left_indx;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                left_indx=i;
                break;
            }
        }
        int right_idx;
        for(int i=n;i>=0;i--){
            if(s[i]=='B'){
                
                right_idx=i;
                break;
            }
        }
        // cout<<"rt->"<<right_idx<<"lf->"<<left_indx<<endl;
        cout<<(right_idx-left_indx)+1<<endl;

    }

    return 0;
}