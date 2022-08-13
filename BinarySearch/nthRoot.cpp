#include<iostream>
#include<math.h>
using namespace std;

double multiply(int num, int n){
    double ans=1.0;
    for(int i=1;i<=n;i++)
        ans*=num;
    return ans;
}

void BS(double m, double n){
    double start=1.0;
    double end=m;
    double eps=1e-6;
    while((end-start)>eps){
        double mid= start+(end-start)/2.0;
        if(multiply(mid,n)<m) start=mid;
        else end=mid;
    }
    cout<<start<<" "<<end<<endl;
    cout<<round(pow(m,double(1.0/double(n))))<<endl;
}

int main()
{
    int n,m;
    cout<<"Number and value of n"<<endl;
    cin>>m>>n;
    BS(m,n);
    return 0;
}