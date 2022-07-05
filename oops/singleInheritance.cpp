#include<iostream>
using namespace std;

class A{
    public:
    void showA(){
        cout<<"This is Class A"<<endl;
    }
};
class B:public A{
    public:
    void showB(){
        cout<<"This is Class B"<<endl;
    }
};

int main()
{
    B b;
    b.showA();
    b.showB();
    return 0;
}