#include<bits/stdc++.h>
using namespace std;
vector<int> rec;
bool sor(pair<int , int> a,pair<int,int> b){
	if(a.first < b.first)return 1;
	else if(a.first==b.first)return (a.second>b.second);
	else return 0;
}
void store()
{
	vector<pair<int,int>> vec(1001);
	for(int i=1;i<1001;i++){
		vec[i].first=0;
		vec[i].second=i;
	}
	for(int i=1;i<1001;i++){
		for(int j=i;j<1001;j+=i){
			vec[j].first++;
		}
	}
	sort(vec.begin(),vec.end());
	sort(vec.begin(),vec.end(),sor);
	for(auto &it: vec){
		rec.emplace_back(it.second);
	}
}
int main()
{
	store();
	int t;cin>>t;
    for(int ff=1;ff<=t;ff++){
		int n;cin>>n;
		cout<<"Case "<<ff<<": "<<rec[n]<<'\n';
	}
}
