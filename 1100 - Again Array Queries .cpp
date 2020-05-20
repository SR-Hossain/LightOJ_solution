#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
#define take(aty) scanf("%d",&aty)
#define rep(i,j,k) for(int i=j;i<k;i++)
int ind(int i,int j){
    vector<int> jec;
    rep(p,i,j+1)jec.emplace_back(vec[p]);
    sort(jec.begin(),jec.end());
    for(int i=0;i<jec.size()-1;i++)jec[i]=jec[i+1]-jec[i];
    sort(jec.begin(),jec.end());
    return jec[0];
}
int main()
{
    int t;cin>>t;rep(cs,1,t+1){
    vec.clear();
    int n,q;take(n);take(q);
    rep(i,0,n){
        int k;take(k);vec.emplace_back(k);
    }
    printf("Case %d:\n",cs);
    rep(puo,0,q){int i,j;take(i);take(j);
    if(j-i>1000)printf("0\n");
    else printf("%d\n",ind(i,j));}
    }
}
