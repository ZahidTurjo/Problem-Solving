#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<string>v(n);
        map<char,ll>first_letter,second_letter;
        map<string,ll>pair;
        for(int i=0;i<n;i++){
            cin>>v[i];
            first_letter[v[i][0]]++;
            second_letter[v[i][1]]++;
            pair[v[i]]++;
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            string s=v[i];
            ans+=first_letter[s[0]]-1;
            ans+=second_letter[s[1]]-1;
            ans-=2*(pair[s]-1);
        }
        cout<<ans/2<<'\n';
    }

    return 0;
}