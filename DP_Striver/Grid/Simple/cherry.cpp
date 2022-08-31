#include<iostream>
#include<vector>
using namespace std;

int Cherry(int i, int j1, int j2, int n, int m, vector<vector<int>> arr){
    if(j1<0 || j2<0 || j1>=m || j2>=m) return -1e7;
    if(i==n-1){
        if(j1==j2) return arr[i][j1];
        return arr[i][j1]+arr[i][j2];
    }
    int maxi=-1e7;
    for(int dj1=-1;dj1<=+1;dj1++){
        for(int dj2=-1;dj2<=+1;dj2++){
            int val=0;
            if(j1==j2) val=arr[i][j1];
            else val=arr[i][j1]+arr[i][j2];
            val+=Cherry(i+1,j1+dj1,j2+dj2,n,m,arr);
            maxi=max(maxi,val);
        }
    }
    return maxi;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
        vector<int> temp(m,0);
        for(int j=0;j<m;j++){
            cin>>temp[i];
        }
        arr.push_back(temp);
    }
    cout<<Cherry(0,0,m-1,n,m,arr)<<endl;
    return 0;
}