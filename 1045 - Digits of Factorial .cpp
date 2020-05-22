#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i=j;i<k;i++)
typedef long long int ll;
vector<double> vec(1000001); // initializing 1000001 elements as zero
int main()
{
	rep(i,1,1000001){
		vec[i]=vec[i-1]+log(i); 
	}
	int t;cin>>t;rep(ff,1,t+1){
	int n,a;cin>>n>>a;
	cout<<"Case "<<ff<<": ";
	cout<<(ll)floor(vec[n]/log(a))+1<<'\n';
}}
