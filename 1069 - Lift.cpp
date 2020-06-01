#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i=j;i<k;i++)

int main()
{
    int t; cin>>t; rep(i,1,t+1){
    int m, l; cin>>m>>l;
    int toground=(m)*4;
    int lifttome=4*(abs(l-m));
    cout<<"Case "<<i<<": "<<19+lifttome+toground<<'\n';
    }
}
