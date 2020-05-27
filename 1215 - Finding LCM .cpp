#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> vec,rec((int)1e6+6);
// storing prime numbers in an array..........
void prime(){
    for(int i=3;i<=(int)1e6;i++)vec.emplace_back(i);
    for(int i=0;i<=vec.size();i++){
        if(vec[i]){
            for(int j=i+vec[i];j<=vec.size();j+=vec[i]){
                vec[j]=0;
            }
        }
    }
    vec.erase(remove(vec.begin(),vec.end(),0),vec.end());
    vec.insert(vec.begin(),2);
}
ll gcd(ll a,ll b){
    if(a<b)swap(a,b);
    ll s;
    while(1){
        if(a%b==0)return b;
        else{
            s=a%b;
            a=b;
            b=s;
        }
    }
}
ll lcm(ll a, ll b){
    return (ll)(a/gcd(a,b))*b;
}

// main work starts..............
ll work(ll l,ll lc){
    ll res=1;
    for(auto &it: vec){
        ll p=1; if(l<it)break;
        if(l%it==0){
            int k,kk;k=kk=0;
            while(l%it==0){l/=it;k++;p*=it;}
            while(lc%it==0){lc/=it;kk++;}
            if(k>kk)res*=p;
        }
    }
    return res;
}
int main()
{
    prime();
    int t;cin>>t;for(int i=1;i<=t;i++){

    ll a,b,L;
    cin>>a>>b>>L;

    cout<<"Case "<<i<<": ";

    if(L%a!=0 or L%b!=0){
        cout<<"impossible\n";continue;
    }


    
    cout<<work(L,lcm(a,b))<<'\n';
    }
}
