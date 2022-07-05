#include<iostream>
using namespace std;

class A{
    public:
    void show(){
        cout<<"No parameter"<<endl;
    }
    void show(int a){
        cout<<a<<" (int) parameter"<<endl;
    }
};

int main()
{
    A a;
    a.show();
    a.show(14);
    return 0;
}