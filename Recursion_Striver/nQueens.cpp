// #include<bits/stdc++.h>
// using namespace std;

// bool isSafe(int row, int col, vector<string> &board, int n){
//     int dupRow=row;
//     int dupCol=col;

//     while(row>=0&&col>=0){
//         if(board[row][col]=='Q') return false;
//         row--;
//         col--;
//     }
//     row=dupRow;
//     col=dupCol;
//     while(col>=0){
//         if(board[row][col]=='Q') return false;
//         col--;
//     }
//     row=dupRow;
//     col=dupCol;
//     while(col>=0&&row<n){
//         if(board[row][col]=='Q') return false;
//         row++;
//         col--;
//     }
//     return true;
// }

// void solve(int col, vector<string> &    board, int n){

//     if(col==n){
//         //cout<<'y';
//         for(auto i:board){
//             for(int j=0;j<n;j++){
//                 cout<<i[j]<<" ";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//         return;
//     }

//     for(int row=0;row<n;row++){
//         if(isSafe(row,col,board,n)){
//             board[row][col]='Q';
//             solve(col+1,board,n);
//             board[row][col]='.';
//         }
//     }
// }

// int main()
// {
//     int n=4;
//     // vector<vector<string>> ans;
//     vector<string> board(n);
//     string s(n,'.');
//     for(int i=0;i<n;i++)
//         board[i]=s;
//     solve(0,board,n);//ans,)
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int temp=0;
void solve(int col,vector<string> &board, int n, vector<int> &leftRow, vector<int> &upperDiag,vector<int> &lowerDiag){

    if(col==n){
        temp++;
        for(auto i:board){
            for(int j=0;j<n;j++){
                cout<<i[j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }

    for(int row=0;row<n;row++){
        if(leftRow[row]==0&&upperDiag[row+col]==0&&lowerDiag[(n-1)+(col-row)]==0){
            board[row][col]='Q';
            leftRow[row]=1;
            upperDiag[row+col]=1;
            lowerDiag[(n-1)+(col-row)]=1;
            solve(col+1,board,n,leftRow,upperDiag,lowerDiag);
            board[row][col]='.';
            leftRow[row]=0;
            upperDiag[row+col]=0;
            lowerDiag[(n-1)+(col-row)]=0;
        }
    }
}

int main()
{
    int n=8;
    vector<string>board(n);    
    string s(n,'.');
    for(int i=0;i<n;i++){
        board[i]=s;
    }
    vector<int> leftRow(n,0),upperDiag((2*n)-1,0),lowerDiag((2*n)-1,0);
    solve(0,board,n,leftRow,upperDiag,lowerDiag);
    cout<<endl<<temp;
    return 0;
}



