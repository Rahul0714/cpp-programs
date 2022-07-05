#include<iostream>
using namespace std;

class Complex{
    int real, img;
    public:
    Complex(){
        cout<<"Default Constructor"<<endl;
    }
    Complex(int a, int b){
        real=a;
        img=b;
    }
    Complex operator + (Complex const &a){
        Complex ans;
        ans.real = real+a.real;
        ans.img=img+a.img;
        return ans;
    }
    void show(){
        cout<<real<<" "<<img<<endl; 
    }
};

int main()
{
    Complex a(2,3),b(3,4);
    Complex c=a+b;
    c.show();
    return 0;
}