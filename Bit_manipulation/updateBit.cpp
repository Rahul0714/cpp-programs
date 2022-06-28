#include<iostream>
using namespace std;

int updateBit(int n, int pos, int newVal){
    int mask=~(1<<pos);
    int clearBit=(mask&n);
    return (clearBit|(newVal<<pos));
}

int main()
{
    int n,pos,newVal;
    cin>>n>>pos>>newVal;
    cout<<updateBit(n,pos,newVal);
    return 0;
}