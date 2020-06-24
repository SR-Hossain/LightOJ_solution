#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592654
int main()
{    
    int t; cin>>t; for(int i=1; i<=t; i++){
    double R, n;
    cin>>R>>n;
    double thta = sin(pi/n);
    thta = thta / (thta + 1);
    thta *= R;       // here thta is r
    printf("Case %d: %.7lf\n",i, thta);
    }
}
