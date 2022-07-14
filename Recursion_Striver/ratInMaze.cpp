#include<bits/stdc++.h>
using namespace std;

void solve(int i, int j, vector<vector<int>> &a, int n, string move, vector<vector<int>> &visited){
    if(i==n-1 && j==n-1){
        for(auto i:move){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    if(i+1<n && !visited[i+1][j] && a[i+1][j]==1){
        visited[i][j]=1;
        solve(i+1,j,a,n,move+'D',visited);
        visited[i][j]=0;
    }
    if(j-1>0 && !visited[i][j-1] && a[i][j-1]==1){
        visited[i][j]=1;
        solve(i,j-1,a,n,move+'L',visited);
        visited[i][j]=0;
    }
    if(j+1<n && !visited[i][j+1] && a[i][j+1]==1){
        visited[i][j]=1;
        solve(i,j+1,a,n,move+'R',visited);
        visited[i][j]=0;
    }
    if(i-1<n && !visited[i-1][j] && a[i-1][j]==1){
        visited[i][j]=1;
        solve(i-1,j,a,n,move+'U',visited);
        visited[i][j]=0;
    }
}

int main()
{
    // vector<string> ans;
    int n=4;
    vector<vector<int>> visited(n,(vector<int>(n,0)));
    vector<vector<int>> m={{1,0,0,0},{1,1,0,0},{1,1,0,0}, {0,1,1,1}};
    if(m[0][0]==1) solve(0,0,m,n,/*ans*/"",visited);
    return 0;
}

// CHECK CORRECT CODE