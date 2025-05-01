#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    string st=to_string(num);
    int sz=st.size();
    if(st.size()<4){
        for(int i=0;i<4-sz;i++){
            st.insert(st.begin(),'0');
        }
    }
    cout<<st<<endl;


    return 0;
}