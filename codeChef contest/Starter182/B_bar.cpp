#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int boy=0;
        int girl=0;
        int people=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='G'){
                girl++;
                people++;
            }
            else if(s[i]=='B'){
                boy++;
                people++;
            }
            if(girl*2<boy){
                break;
            }
        }
        cout<<people<<'\n';

    }

    return 0;
}