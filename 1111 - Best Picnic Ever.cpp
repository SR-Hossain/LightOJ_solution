#include<bits/stdc++.h>
using namespace std;
int t, cs, k, n, m;
void dfs(int u, vector<int> *cnt, vector<int> vec[], vector<int> *visited){
    if((*visited)[u]==1)return;
    
    (*visited)[u]=1;
     
    (*cnt)[u]++; // how many people can visit
    
    for(int i=0; i<vec[u].size(); i++){
        dfs(vec[u][i], cnt, vec, visited);
    }
}
int main()
{
    for(cin>>t; ++cs<=t and cin>>k>>n>>m; ){
        int ans = 0, city[1001];
        vector<int> cnt(1001), vec[1001];
        for(int i=0, x; i<k and cin>>x; city[i++]=x);
        for(int i=0, u, v; i++<m and cin>>u>>v; vec[u].emplace_back(v));

        for(int i=0; i<k; ){
            vector<int> visited(1001);
            dfs(city[i++], &cnt, vec, &visited);
        }
        
        for(int i=1; i<=n; i++)if(cnt[i]>=k)ans++;
        cout<<"Case "<<cs<<": "<< ans<<'\n';
    }
}
