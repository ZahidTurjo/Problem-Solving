#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mp;
    // mp.insert({10,20});
    // mp.insert({10,200});

    mp[2]=12;
    // mp[10]=629;
    mp[1]=209;
    mp[7]=9;
    mp[19]=21;
    // cout<<mp[10]<<endl;
    // cout<<mp[2]<<endl;
   
    for(auto[key,value]:mp){
        cout<<key<<"->"<<value<<endl;
    }

    auto it=mp.find(10);
    if(it==mp.end()){
        cout<<"No find"<<endl;
    }else{

        cout<<it->second<<endl;
    }
    for(auto[key,value]:mp){
        cout<<key<<"->"<<value<<endl;
    }
    // auto it=--mp.end();
    // cout<<it->first<<" "<<it->second<<endl;

    // auto it=mp.lower_bound(5);
    // cout<<it->first<<" "<<it->second<<endl;

    // auto it=mp.upper_bound(7);
    // cout<<it->first<<" "<<it->second<<endl;


    return 0;
}