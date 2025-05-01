#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        multiset<int>mt;
        for(int i=0;i<n;i++){
            mt.insert(a[i]);
        }
        int l=0,r=n-1;
        bool fd=false;
        while(l<r){
            if(a[l]==(*mt.begin())|| a[l]==(*mt.rbegin())){
                auto it=mt.find(a[l]);
                mt.erase(it);
                l++;
            }else if(a[r]==(*mt.begin())|| a[r]==(*mt.rbegin())){
                auto it=mt.find(a[r]);
                mt.erase(it);
                r--;
            }else{
                cout<<(l+1)<<" "<<(r+1)<<'\n';
                fd=true;
                break;
            }
        }
        if(!fd){
            cout<<-1<<'\n';
        }

    }

    return 0;
}
