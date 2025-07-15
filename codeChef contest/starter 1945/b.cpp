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
        vector<int> v(n);

        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(v[i]>b[i]){
                c+=(v[i]-b[i]);
            }
        }
        cout<<c<<'\n';
    }
    

    return 0;
}