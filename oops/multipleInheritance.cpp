#include<iostream>
using namespace std;

class A{
    public:
    void showA(){
        cout<<"This is Class A"<<endl;
    }
};
class B{
    public:
    void showB(){
        cout<<"This is Class B"<<endl;
    }
};
class C:public A, public B{
    public:
    void showC(){
        cout<<"This is Class C"<<endl;
    }
};

int main()
{
    C c;
    c.showA();
    c.showB();
    c.showC();
    return 0;
}