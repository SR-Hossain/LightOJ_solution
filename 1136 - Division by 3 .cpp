// think of each number if divisible by 3 as 1, else 0
// 0 -> 1        4(1234)     ............
// 1 -> 2(12)    5(12345)    ............
// 1 -> 3(123)   6(123456)   ............


#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i=j;i<k;i++)
int main()
{
    int t;cin>>t;
    rep(i,1,t+1){
    long long int a,b,cnt=0;cin>>a>>b;
    if(a==b){
        if(a%3==1)cnt=0;
        else cnt=1;}
    else{
    if(b<a)swap(a,b);
    if(a%3==1)a++;
    if(b%3==1)b--;
    cnt=1+(b-a+1)/3;
    cnt*=2;
    if(b%3==2)cnt-=1;
    if(a%3==0)cnt-=1;}
    cout<<"Case "<<i<<": ";
    cout<<cnt<<'\n';
}}
