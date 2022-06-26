
// pass by value

// #include<iostream>
// using namespace std;

// void increament(int n){
//     n++;
// }

// int main()
// {
//     int n=1;
//     increament(n);
//     cout<<n<<endl;
//     return 0;
// }

// pass by reference

#include<iostream>
using namespace std;

void increament(int *n){
    *n+=1;
}

int main()
{
    int n=1;
    increament(&n);
    cout<<n<<endl;
    return 0;
}