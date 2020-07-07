#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sz (ll)1e18

string work(int n){
    if(n&1)return "odd";
    else return "even";
}

int main()
{
    int t; cin>>t;
    
    for(int i=1; i<=t; i++){
    ll n; cin>>n;
    
    n = __builtin_popcount(n); // how many 1 are there in bit form
    
    cout<<"Case "<<i<<": "<<work(n)<<'\n';
    }
}
