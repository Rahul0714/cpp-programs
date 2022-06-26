#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=2,b=4;
    swap(&a,&b);
    cout<<"a: "<<a<<" and b: "<<b;
    return 0;
}