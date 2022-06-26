#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    // cout<<arr<<endl;
    int i=0,count=0,maxCount=-1,maxSt=0,st=0;
    while(true){
        if(arr[i]=='\0'||arr[i]==' '){
            if(maxCount<count){
                maxCount=count;
                maxSt=st;
            }
            st=i+1;
            count=0;

        }else{
            count++;
        }
        if(arr[i]=='\0')
            break;
        i++;
    }
    cout<<maxCount<<endl;
    while(arr[maxSt]!='\0'){
        cout<<arr[maxSt];
        maxSt++;
    }
        
    return 0;
}