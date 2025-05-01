#include<bits/stdc++.h>
using namespace std;
int main(){

    tuple<string,int,string>t = make_tuple("rahim",10,"012");
    // cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;
    auto[name,roll,phn]=t;
    cout<<name<<" "<<roll<<" "<<phn<<endl;

    return 0;
}