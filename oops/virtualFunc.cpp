#include<iostream>
using namespace std;

class base{
    public:
        virtual void show(){
            cout<<"Base class"<<endl;
        }
};
class derived:public base{
    public:
        void show(){
            cout<<"Derived class"<<endl;
        }
};

int main()
{
    base *basePtr;
    derived d;
    basePtr=&d;
    basePtr->show();
    return 0;
}