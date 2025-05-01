#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    unordered_map<string,int>names;
    while(t--){
        string name;
        cin>>name;
        if(names.count(name)==0){
            names[name]=0;
            cout<<"OK"<<'\n';
        }else{
            names[name]++;
            string new_name=name+to_string(names[name]);
            if(names.count(new_name)==0){
                names[new_name]=0;
            }
            cout<<new_name<<'\n';
        }

    }
    for(auto[x,y]:names){
        cout<<x<<"->"<<y<<'\n';
    }

    return 0;
}

