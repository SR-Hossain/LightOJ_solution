#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;cin>>t;for(int i=1;i<=t;i++){
    ll n,col; cin>>n;
    ll row=ceil(1.*sqrt(n));
    ll tmp=row;
    ll col1=n-(row-1)*(row-1);
    ll col2=row*row-n;
    if(col2>=row)col=col1;
    else{
        col=col2+1;
        swap(row,col);
    }
    if(!(tmp&1))swap(row,col);
    cout<<"Case "<<i<<": "<<row<<' '<<col<<'\n';
}}
