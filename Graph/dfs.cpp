#include<bits/stdc++.h>
using namespace std;

void dfs(int i, vector<int>&vis, vector<int>&dfsAns, vector<int> g[]){
    vis[i]=1;
    dfsAns.push_back(i);
    for(auto x:g[i]){
        if(!vis[x])
            dfs(x, vis, dfsAns, g);
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> g[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> vis(n+1,0);
    vector<int> dfsAns;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i, vis, dfsAns, g);
        }
    }
    for(auto x: dfsAns)
        cout<<x<<" ";
    return 0;
}