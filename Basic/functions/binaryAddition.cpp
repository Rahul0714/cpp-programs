#include<iostream>
using namespace std;

int reverse(int sum){
    int revSum=0;
    while(sum>0){
        revSum=(revSum*10)+(sum%10);
        sum/=10;
    }
    return revSum;
}

int binaryAdd(int a,int b){
    int sum=0,prevCarry=0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            sum=(sum*10)+prevCarry;
            prevCarry=0;
        }else if((a%2==1 && b%2==0)||(a%2==0 && b%2==1)){
            if(prevCarry==1){
                sum=(sum*10)+0;
                prevCarry=1;
            }else{
                sum=(sum*10)+1;
                prevCarry=0;
            }
        }else{
            if(prevCarry==1){
                sum=(sum*10)+1;
                prevCarry=1;
            }else{
                sum=(sum*10)+0;
                prevCarry=1;
            }
        }
        a/=10;
        b/=10;
    }
    while(a>0){
        if(prevCarry==1){
            if(a%2==1){
                sum=(sum*10)+0;
                prevCarry=1;
            }else{
                sum=(sum*10)+1;
                prevCarry=0;
            }
        }else{
            sum=(sum*10)+(a%2);
        }
        a/=10;
    }
    while(b>0){
        if(prevCarry==1){
            if(b%2==1){
                sum=(sum*10)+0;
                prevCarry=1;
            }else{
                sum=(sum*10)+1;
                prevCarry=0;
            }
        }else{
            sum=(sum*10)+(b%2);
        }
        b/=10;
    }
    if(prevCarry==1){
        sum=(sum*10)+1;
        prevCarry=0;
    }
    int ans=reverse(sum);
    return ans;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<binaryAdd(a,b)<<endl;
    return 0;
}