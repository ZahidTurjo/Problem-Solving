#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int>m;

        for(auto x:s){
            if(x=='B'){
                 for(int i=m.size()-1;i>=0;i--){
                    if(isupper(m[i])){
                        m.erase(m.begin()+i);
                        break;
                    }
                 }
            }else if(x=='b'){
                for(int i=m.size()-1;i>=0;i--){
                    if(islower(m[i])){
                        m.erase(m.begin()+i);
                        break;
                    }
                }
        }else{

            m.push_back(x);
        }
    }

    for(char c:m){
        cout<<c;
    }
    cout<<'\n';

}

    return 0;
}