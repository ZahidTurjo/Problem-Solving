#include<bits/stdc++.h>
using namespace std;
int main(){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
    
      int sum1=0;
      int sum2=0;
      bool turn=true;
      int i=0;
      int j=n-1;
    

      while(i<=j){
        int x;
        if(v[j]>v[i]){
             x=v[j];
             j--;
        }else{
            x=v[i];
            i++;
        }
        if(turn){
            sum1+=x;
            
        }else{
            sum2+=x;
        }
        turn=!turn;
      }
  
        cout<<sum1<<" "<<sum2<<endl;
  

   
    

    return 0;
}