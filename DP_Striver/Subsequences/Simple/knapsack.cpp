#include<iostream>
#include<vector>
using namespace std;

int find(int ind, vector<int> &value, vector<int> &wt, int W, vector<vector<int>> &dp){
    if(ind==0){
        if(W>=wt[ind]) return value[ind];
        else return 0;
    }
    if(dp[ind][W]!=-1) return dp[ind][W];
        int np=0+find(ind-1, value, wt, W, dp);
        int p=INT_MIN;
        if(W>=wt[ind])
            p=value[ind]+find(ind-1, value, wt, W-wt[ind], dp);
        
        return dp[ind][W]=max(np, p);
    }

int main()
{
    vector<int> value={30,40,60};
    vector<int> wt={3,2,5};
    int W=6;
    vector<vector<int>> dp(value.size(),vector<int>(W+1,-1));
    cout<<find(value.size()-1, value, wt, W, dp)<<endl;

    


    return 0;
}