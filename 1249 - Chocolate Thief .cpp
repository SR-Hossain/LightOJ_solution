#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i=j;i<k;i++)
int main()
{
    int t;cin>>t;rep(cs,1,t+1){
    int te;cin>>te;
    map<int, string> vec;
    rep(i,0,te){string str;cin>>str;int a,b,c;cin>>a>>b>>c;vec.insert({a*b*c,str});}
    cout<<"Case "<<cs<<": ";
    if(vec.size()==1)cout<<"no thief";
    else{
        auto u=vec.begin();u++;u++;
        cout<<u->second<<" took chocolate from "<<vec.begin()->second;
    }
    cout<<'\n';
}}
