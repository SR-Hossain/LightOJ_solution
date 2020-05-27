#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        double r;
        cin>>r;
        printf("Case %d: %.2lf\n",i,r*r*(4.-2*acos(0.0)));
    }
}
