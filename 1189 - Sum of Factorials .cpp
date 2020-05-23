#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,j,k) for(int i=j;i<k;i++)
int main()
{
 // Storing factorials................
    vector<long long int> vec;
    vec.emplace_back(1);
    rep(i,1,21){
        vec.emplace_back((ll)vec[i-1]*i);
    }
    
    
    
    int t;cin>>t;rep(ff,1,t+1){
    ll n;cin>>n;
    vector<ll> jec;jec.clear();
 // Checking from last to first
    for(int i=vec.size()-1;i>=0;i--){
        if(n==0)break;
        if(vec[i]<=n){
            n-=vec[i];
            jec.emplace_back(i);
        }
    }
    cout<<"Case "<<ff<<": ";
    if(n!=0)cout<<"impossible\n";
    else{
    sort(jec.begin(),jec.end());
    cout<<jec[0];jec.erase(jec.begin());
    for(auto &it : jec)cout<<"!+"<<it;
    cout<<"!\n";}
    }
}
