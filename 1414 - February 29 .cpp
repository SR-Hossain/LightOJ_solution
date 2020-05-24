#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i=j;i<k;i++)
typedef long long int ll;
ll then(ll y){
    y-=2000;
    y=abs(y);
    return (y/4)-((y/400)*3+((y+2000)/100)%4);
}
bool  is(ll y){
    return (y%400==0 or (y%4==0 and y%100!=0));
}
int main()
{
    int t;cin>>t;rep(ff,1,t+1){
    ll y,yy;string m,mm,d,dd;
    cin>>m>>d>>y>>mm>>dd>>yy;
    ll cnt=then(yy-1)-then(y);
    if(y!=yy){
    if(is(y)){
        if(m=="January" or m=="February")cnt++;
    }
    if(is(yy)){
        if((mm!="January" and mm!="February") or (mm=="February" and dd=="29,"))cnt++;
    }}
    else{
        if(is(y)){
            if(m=="January" or m=="February"){
                if((mm!="January" and mm!="February") or (mm=="February" and dd=="29,"))cnt=1;
                else cnt=0;}
            else cnt=0;
        }
        else cnt=0;
    }
    cout<<"Case "<<ff<<": ";
    cout<<cnt<<'\n';}
}
