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
        int l=0,r=n-1,mid;
        bool ok=false;
        while (l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]==key){
                ok=true;
                break;
            }
            else if(key<a[mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }

        
        if(ok)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        

    }

 
    

    return 0;
}