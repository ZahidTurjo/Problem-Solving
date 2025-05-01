#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair<string,int>student={"turjo",10};

    // // cout<<student.first<<" "<<student.second<<endl;
    // student.first="boss";
    // auto[name,roll]=student;
    // cout<<name<<" "<<roll<<endl;
    int n;
    cin>>n;
    pair<string,int>students[n];
    for(int i=0;i<n;i++){
        cin>>students[i].first>>students[i].second;
    }
    for(auto[x,y]:students){
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}