// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<string>v1(n);
//         vector<string>v2(n);
//         vector<string>v3(n);
//         for(int i=0;i<n;i++){
//             cin>>v1[i];
//         }
//         for(int i=0;i<n;i++){
//             cin>>v2[i];
//         }
//         for(int i=0;i<n;i++){
//             cin>>v3[i];
//         }
//         int sum1=0;
//         int sum2=0;
//         int sum3=0;
//         for(int i=0;i<n;i++){
//             auto it1=find(v2.begin(),v2.end(),v1[i]);
//             auto it2=find(v3.begin(),v3.end(),v1[i]);
//             if(it1==v2.end()&& it2==v3.end()){
//                 sum1+=3;
//             }else if(it1!=v2.end()&& it2 !=v3.end()){
//                 sum1+=0;
//             }else{
//                 sum1+=1;
//             }

//         }

//         for(int i=0;i<n;i++){
//             auto it1=find(v1.begin(),v1.end(),v2[i]);
//             auto it2=find(v3.begin(),v3.end(),v2[i]);
//             if(it1==v1.end()&& it2==v3.end()){
//                 sum2+=3;
//             }else if(it1!=v1.end()&& it2 !=v3.end()){
//                 sum2+=0;
//             }else{
//                 sum2+=1;
//             }

//         }

//         for(int i=0;i<n;i++){
//             auto it1=find(v2.begin(),v2.end(),v3[i]);
//             auto it2=find(v1.begin(),v1.end(),v3[i]);
//             if(it1==v2.end()&& it2==v1.end()){
//                 sum3+=3;
//             }else if(it1!=v2.end()&& it2 !=v1.end()){
//                 sum3+=0;
//             }else{
//                 sum3+=1;
//             }

//         }

//         cout<<sum1<<" "<<sum2<<" "<<sum3<<'\n';
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,m=3;
        cin>>n;
        map<string,vector<int>>mp;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                string s;
                cin>>s;
                mp[s].push_back(i);
            }
        }
       
        vector<int>ans(m+1);
        for(auto[x,y]:mp){
            vector<int>v=y;
            if(v.size()==1){
                ans[v[0]]+=3;
            }else if(v.size()==2){
                ans[v[0]]+=1;
                ans[v[1]]+=1;
            }
        }


        for(int i=1;i<=m;i++){
            cout<<ans[i]<<" ";
        }
        cout<<'\n';

    }


    return 0;
}