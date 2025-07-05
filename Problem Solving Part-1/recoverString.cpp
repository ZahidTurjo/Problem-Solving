#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
       
        int n;
        cin >> n;
        bool ok=false;
        for (int i = 1; i <= 26 && !ok; i++) {
            for (int j = 1; j <= 26 && !ok; j++) {
                for (int k = 1; k <= 26; k++) {
                    if (i + j + k == n) {
                        cout << (char)('a' + i - 1) << (char)('a' + j - 1) << (char)('a' + k - 1) << '\n';
                        ok=true;
                        break;
                    }
                }
            }
        }

    }
    

    return 0;
}