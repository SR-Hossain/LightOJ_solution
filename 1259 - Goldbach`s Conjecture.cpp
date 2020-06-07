#include <bits/stdc++.h>
using namespace std;
bool vec[(int)1e7];
vector <int> prime;
void sieve() {
    for(int i=0; i<(int)1e7; i++)vec[i]=1;
    for(int i=0; i<(int)1e7; i+=2)vec[i]=0;
    vec[1]=0;vec[2]=1; prime.emplace_back(2);
	for(int i=3; i<(int)1e7; i+=2){
        if(vec[i]){
            for(int j=i+i; j<(int)1e7; j+=i){
                vec[j]=0;
            }
            prime.emplace_back(i);
        }
    }
}
int work(int n){
    int cnt=0;
    if(vec[n/2])cnt++;
    for(auto &it: prime){
        if(it>=n/2)return cnt;
        if(vec[n-it])cnt++;
    }
}
int main()
{
    sieve();
    int t; cin>>t; for(int i=1; i<t+1; i++){
        int n; cin>>n;
        cout<<"Case "<<i<<": "<<work(n)<<'\n';
    }
}
