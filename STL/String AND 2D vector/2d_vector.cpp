#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<int>a;
        for(int j=0;j<m;j++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }
      v.push_back(a);
    }

    // for(auto z: v){
    //     for(auto value:z){
    //         cout<<value<<" ";
    //     }
    //     cout<<'\n';
    // }
    for(int i=0;i,n;i++){
        if(i==2){
            sort(v[i].rbegin(),v[i].rend());
        }
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
