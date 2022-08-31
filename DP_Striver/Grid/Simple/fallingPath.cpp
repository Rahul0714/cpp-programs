#include<iostream>
#include<vector>
using namespace std;

int Path(int i, int j, vector<vector<int>> &arr){
    if(j<0 || j>=arr[0].size()) return -1e8;
    if(i==0) return arr[i][j];

    int s=arr[i][j]+Path(i-1,j,arr);
    int ld=arr[i][j]+Path(i-1,j-1,arr);
    int rd=arr[i][j]+Path(i-1,j+1,arr);

    return max(s,max(ld,rd)); 
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
    int maxi=-1e8;
    for(int i=0;i<m;i++){
        maxi=max(maxi,Path(n-1,i,arr));
    }
    cout<<maxi<<endl;
    return 0;
}

//correct code may be problem in inputing values or stack space 