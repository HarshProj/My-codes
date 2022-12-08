#include<iostream>
using namespace std;

int main(){
//    int arr[10]={23,122,41,67};
//    int i=3;
//    cout<< i[arr]<<endl;
    // int temp[10];
    // cout<<sizeof(temp)<<endl;
    // int *ptr=&temp[0];
    // cout<<sizeof(ptr)<<endl;

    // int a[20]={1,2,3,5};
    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;

    // int *p=&a[0];
    // cout<<&p[0]<<endl;
    // cout<<&p<<endl;
    // cout<<p<<endl;

    int arr[10];
    // arr=arr+1;ERROR
    int*ptr=&arr[0];
    ptr=ptr+1;
    cout<<ptr<<endl;
    return 0;
}