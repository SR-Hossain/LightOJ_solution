#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    for(int ff=1;ff<=t;ff++){
    vector<int> vec;
    int n;  cin>>n;
    for(int i=0;i<n;i++){
        int k;cin>>k;if(k>0)vec.emplace_back(k);//store only positive non-zero numbers
    }
    cout<<"Case "<<ff<<": ";
    cout<<accumulate(vec.begin(),vec.end(),0)<<'\n';
}}
