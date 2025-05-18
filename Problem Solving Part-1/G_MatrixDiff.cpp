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
        int a [n][n];
        queue<int>q;
        int cnt=0;
        for(int i=1,j=n*n;i<=j;){
            if(cnt%2==0){
                q.push(i);
                i++;
            }else{
                q.push(j);
                j--;
            }
            cnt++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int val=q.front();
                a[i][j]=val;
                q.pop();
            }
        }
        for(int i=0;i<n;i++){
            
        }

        for(int i=0;i<n;i++){
            for(int j=0,k=n-1;j<n;){
                if(i%2==1){

                    cout<<a[i][k]<<" ";
                    k--;
                    j++;
                }else{
                    cout<<a[i][j]<<" ";
                    j++;
                }
                
            }
            cout<<'\n';
        }
       
    }
    

    return 0;
}