#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        deque<int>q;
        for(int i=0;i<n;i++){
           int x;
           cin>>x;
           q.push_back(x);
        }
        for(int i=0;i<k;i++){
            int last=q.front()+q.back();
            q.pop_front();
            q.pop_back();
            q.push_back(last);

        }
        for(auto val : q){
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    

    return 0;
}