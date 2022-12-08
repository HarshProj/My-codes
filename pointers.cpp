#include<iostream>
using namespace std;

int main(){
    // int num=5;
    // int*a=&num;

    // cout<<*a<<endl;
    // // cout<<++*a<<endl;
    // cout<<"Size of integer is"<<sizeof(int)<<endl;
    // cout<<"Size of pointer is"<<sizeof(a)<<endl;//Note any type of data char int double pointer will alway stores address of 8 bytes 

    // int i=5;
    // int*p=0;
    // p=&i;
    // cout<<p;
    int num=5;
    int*p= &num;
    int*q=p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    //Important concept
    int i=3;
    int *t=&i;
    cout<<(t)<<endl;
    t=t+1;
    cout<<t;
    
    return 0;
}