#include<bits/stdc++.h>
using namespace std;

// We will convert the second string to compare with the first one

string bintoint(string str){
    return to_string(stoi(str,0,2));
}

int main()
{
    int t;cin>>t;
    for(int ff=1;ff<=t;ff++){
    string str,strr;
    cin>>str>>strr;
    string s,r;
    r+=bintoint(strr.substr(0,8));r+='.';
    r+=bintoint(strr.substr(9,17));r+='.';
    r+=bintoint(strr.substr(18,26));r+='.';
    r+=bintoint(strr.substr(27,35));
    
    cout<<"Case "<<ff<<": ";
    if(r==str)cout<<"Yes\n";
    else cout<<"No\n";
    }
}
