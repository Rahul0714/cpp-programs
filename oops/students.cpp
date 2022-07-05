#include<iostream>
using namespace std;

class Student{
    string name;
    int age;
    bool gender;
    public:
    Student(){
        cout<<"Default Constructor"<<endl;
    }
    Student(string n, int a, bool g){
        name=n;
        age=a;
        gender=g;
    }
    // void setParam(string n, int a, bool g){
    //     name=n;
    //     age=a;
    //     gender=g;
    // }
    void getParam(){
        cout<<name<<" "<<age<<" "<<gender<<endl;
    }
    Student(Student &a){
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    ~Student(){
        cout<<"Destructor"<<endl;
    }

    bool operator == (Student &a){
        if(name==a.name && age==a.age&&gender==a.gender)
            return true;
        return false;
    }
};

int main()
{
    // int n;
    // cin>>n;
    // Student s[n];
    // string nm;
    // int a;
    // bool g;
    // for(int i=0;i<n;i++){
    //     cin>>nm>>a>>g;
    //     s[i].setParam(nm,a,g);
    // }
    // for(int i=0;i<n;i++){
    //    s[i].getParam();
    // }
    Student a("Rahul",22,0);
    a.getParam();
    Student b("Vaidehi",21,1);
    b.getParam();
    if(a==b){
        cout<<"Equal"<<endl;
    }else{
        cout<<"Not Equal"<<endl;
    }
    return 0;
}