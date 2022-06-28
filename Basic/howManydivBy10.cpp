#include<iostream>
using namespace std;

int main()
{
    int count5=0,count7=0,count35=0;
    for(int i=1;i<=100;i++){
        if(i%5==0)
            count5++;
        else if(i%7==0)
            count7++;
        else if(i%35==0)   
            count35++;
        else 
            continue;
    } 
    cout<<((count5+count7)-count35)<<endl;
    return 0;
}