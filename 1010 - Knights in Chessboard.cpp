#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i=j;i<k;i++)
int main()
{
    int t,cnt;cin>>t;rep(i,0,t){
    int n,m;cin>>n>>m;
    if(n==1 or m==1)cout<<"Case "<<i+1<<": "<<n*m<<'\n';
    else{
    if(m==2)swap(n,m);
    if(n==2){
        if(m&1){
            cout<<"Case "<<i+1<<": "<<m+1<<'\n'; 
        }
        else{
            cnt=m+((m+4)%4);
            cout<<"Case "<<i+1<<": "<<cnt<<'\n';  
        }
    }
    else{
    int cnt=ceil(n/2.);
    int hej=cnt-1;
    cnt*=ceil(m/2.);
    hej*=(ceil(m/2.)-1);
    if(!(n&1)){
        hej+=(ceil(m/2.)-1);
    }
    if(!(m&1)){
        cnt+=ceil(n/2.)-1;
        if(!(n&1))cnt++;
    }
    cout<<"Case "<<i+1<<": ";
    cout<<cnt+hej<<'\n';
}}}}
