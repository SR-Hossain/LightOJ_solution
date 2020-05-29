#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string intobin(ll n){
    string str;
    for(;n!=0;n/=2){
        str+=((n&1)+48);
    }
    str+="0";
    return str;// reversed binary number
}
ll work(string str){
    auto rr=str.find("10");// first find 10 and replace with 01
    str.replace(rr,2,"01");
                            // if there is 01 after that index replace with 10 till there is no 01
    for(int j=0;j<rr;j++){
    for(int i=0;i<rr;i++){
        if(str[i]=='0' and str[i+1]=='1'){
            str[i]='1';
            str[i+1]='0';
        }
    }}
    reverse(str.begin(),str.end()); // reverse to get the binary
    return stoll(str,nullptr,2);// connvert string to long long integer
}
int main()
{
    ll t;cin>>t;
    for(ll i=1;i<t+1;i++){
    ll n;cin>>n;
    cout<<"Case "<<i<<": "<<work(intobin(n))<<'\n';}
}
