#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i=j;i<k;i++)
vector<long long int> vec;
long long int m=10000007;
int main(){
    int t;cin>>t;rep(cs,1,t+1){
    int n;vec.clear();
    rep(i,0,6){
        cin>>n;vec.emplace_back(n); // taking value of a,b,c,d,e,f
    }
    cin>>n; // taking value of n
    rep(i,5,n+1){
        vec.emplace_back((vec[i]+vec[i-1]+vec[i-2]+vec[i-3]+vec[i-4]+vec[i-5])%m);
    }
    cout<<"Case "<<cs<<": "<<(vec[n]%m)<<'\n';
}}
