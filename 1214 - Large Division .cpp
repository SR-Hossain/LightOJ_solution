#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i=j;i<k;i++)
typedef long long int ll;
int main()
{
    int t;cin>>t;rep(ff,1,t+1){
    
// First integer as string str and second one as k
// we ignore negative sign

    string str;str.clear();
    ll n=0,k;cin>>str>>k;
    k=abs(k);// make k positive
    if(str[0]=='-')str.erase(str.begin());// make str positive
    cout<<"Case "<<ff<<": ";
    rep(i,0,str.size()){
        n=10*n+(str[i]-'0');// The trick
        n%=k;
    }
    if(n==0)cout<<"divisible\n";
    else cout<<"not divisible\n";
}}
