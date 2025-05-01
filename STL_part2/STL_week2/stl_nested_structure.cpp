#include<bits/stdc++.h>
using namespace std;
int main(){

    map<int,set<int>>mp;
    set<int>s1;
    s1.insert(2);
    s1.insert(5);
    s1.insert(2);
    
    set<int>s2;
    s2.insert(9);
    s2.insert(5);
    s2.insert(4);
    
    set<int>s3;
    s3.insert(12);
    s3.insert(1);
    s3.insert(6);
    mp[5]=s1;
    mp[7]=s2;
    mp[10]=s3;

    for(auto[x,y]:mp){
        cout<<x<<"->";
        for(int val:y){
            cout<<val<<" ";
        }
        cout<<'\n';
        
    }
    int x=6,y=8;
    auto lb1=mp.lower_bound(x);
    if(lb1!=mp.end()){
      cout<<lb1->first<<endl;
      auto lb2=mp[lb1->first].lower_bound(y);
      cout<<*lb2<<endl;
    }

    return 0;
}