#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin>>n>>q;
    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        int key;
        cin>>key;
        int l=0,r=n-1,ans=n;
      
        while (l<=r)
        {
           int mid=(l+r)/2;
           if(key<=a[mid]){
            ans=mid;
            r=mid-1;
        }else{
               l=mid+1;
           }
        }



        cout<<ans+1<<'\n';
    }

    return 0;
}