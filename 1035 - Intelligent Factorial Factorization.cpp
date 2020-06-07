#include <bits/stdc++.h>
using namespace std;
int cnt[125];
vector <int> prime;
void sieve() { // array of prime number
    for(int i=3; i<125; i+=2)prime.emplace_back(i);
    for(int i=0; i<prime.size(); i++){
        if(prime[i]){
        for(int j=i+prime[i]; j<prime.size(); j+=prime[i]){
            prime[j]=0;
        }}
    }
    prime.erase(remove(prime.begin(),prime.end(),0),prime.end());
    prime.insert(prime.begin(),2);
}
int work(int n){
    for(int i=2; i<=n; i++){ // from 2 to n 2*3*4*5*...*n so work on each number
        int x=i;
        for(auto &it: prime){
            if(it>x)break;
            while(x%it==0){// if divisible by prime count it
                x/=it;
                cnt[it]++;
            }
        }
    }
    printf("%d = %d (%d)",n,2,cnt[2]);
    for(int i=3; i<=n; i++){
        if(cnt[i]){
            printf(" * %d (%d)",i,cnt[i]);
        }
    }
}
int main()
{
    sieve();
    int t; cin>>t; for(int i=1; i<t+1; i++){
        int n; cin>>n;
        cout<<"Case "<<i<<": ";
        memset(cnt,0,sizeof(cnt));
        work(n);
        cout<<'\n';
    }
}
