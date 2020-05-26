#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int len;
vector<int> prim;

// Create an array of prime numbers till 1e6.......
void prime(){
    for(int i=3;i<=(int)1e6;i+=2)prim.emplace_back(i);
    for(int i=0;i<=prim.size();i++){
        if(prim[i]){
            for(int j=i+prim[i];j<=prim.size();j+=prim[i])prim[j]=0;
        }
    }
    prim.erase(remove(prim.begin(),prim.end(),0),prim.end());
    prim.insert(prim.begin(),2);
    len=prim.size();
}
//main program.............
int work(ll n){
    int cnt=1;
    for(int i=0;i<len and prim[i]<=sqrt(n);i++){
        if(n%prim[i]==0){
            int mul=1;
            while(n%prim[i]==0){
            n/=prim[i];
            mul++;}
            cnt*=mul;
        }
    }
    if(n==1)return --cnt;
    else return cnt+cnt-1;
}
int main()
{
    prime();
    int t;cin>>t;
    for(int cs=1;cs<=t;cs++){
        ll n;cin>>n;
        cout<<"Case "<<cs<<": "<<work(n)<<'\n';
    }
    return 0;
}
