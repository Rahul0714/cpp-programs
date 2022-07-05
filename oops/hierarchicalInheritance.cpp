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
class C:public A{

    public:
    void showC(){
        cout<<"This is Class C"<<endl;
    }
};
class D:public B{

    public:
    void showD(){
        cout<<"This is Class D"<<endl;
    }
};
class E:public B{

    public:
    void showE(){
        cout<<"This is Class E"<<endl;
    }
};
class F:public C{

    public:
    void showF(){
        cout<<"This is Class F"<<endl;
    }
};
class G:public C{

    public:
    void showG(){
        cout<<"This is Class G"<<endl;
    }
};
int main()
{
    // call as per you wanted!;
    return 0;
}