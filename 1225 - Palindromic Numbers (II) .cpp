#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i=j;i<k;i++)
int main()
{
    int t;cin>>t;rep(i,1,t+1){
    string str,vec;
    cin>>str;vec=str;
    reverse(str.begin(),str.end());
    cout<<"Case "<<i<<": ";
    if(str==vec)cout<<"Yes\n";
    else cout<<"No\n";
}}
