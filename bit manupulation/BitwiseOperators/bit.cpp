#include<bits/stdc++.h>
using namespace std;
bool check_kth_bit_on_or_off(int n,int k){
    return ((n>>k)&1);
}
void print_off_and_on_bits(int n){
    for(int i=0;i<=7;i++){
       cout<<i<<"->"<<check_kth_bit_on_or_off(n,i)<<endl;
    }
}
int turn_on_kth_bit(int n,int k){
    return(n|(1<<k));
}
int turn_off_kth_bit(int n,int k){
    return(n&~(1<<k));
}
int toggle_kth_bit(int n,int k){
    return (n^(1<<k));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout<<check_kth_bit_on_or_off(45,2)<<endl;
    // print_off_and_on_bits(45);
    // cout<<turn_on_kth_bit(45,4)<<endl;
    // cout<<turn_off_kth_bit(45,3)<<endl;
    //  cout<<toggle_kth_bit(45,4)<<endl;
    cout<<__builtin_popcount(45)<<endl;
    cout<<__lg(45)<<endl; //heighest set bit
    return 0;
}