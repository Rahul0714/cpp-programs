#include<bits/stdc++.h>
using namespace std;

int ninja(vector<vector<int>> &arr, int day, int last){
    if(day==0){
        int maxi=INT_MIN;
        for(int i=0;i<=3;i++)
            if(i!=last)
                maxi=max(maxi, arr[0][i]);
        return maxi;
    }
    int maxi=INT_MIN;
    for(int i=0;i<3;i++){
        if(i!=last){
        int points=arr[day][last]+ninja(arr,day-1,i);
        maxi=max(maxi,points);
        }
    }
    return maxi;
}

int main()
{
    vector<vector<int>> arr={{5,50,10},{2,100,11}};
    int day=2;
    int last=3;
    cout<<ninja(arr, day, last)<<endl;

    return 0;
}