#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // vector<string> board(n);
    // string s(n,'.');
    // for(int i=0;i<n;i++)
    //     board[i]=s;
    // for(auto i:board)
    //     cout<<i<<" ";
    vector<vector<char>> ans;
    for(int i=0;i<n;i++){
        vector<char> temp;
        for(int j=0;j<n;j++){
            temp.push_back('.');
        }
        ans.push_back(temp);
    }

    cout<<ans[0][0]<<endl;
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }cout<<endl;
    }


    return 0;
}