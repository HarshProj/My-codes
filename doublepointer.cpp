#include<iostream>
using namespace std;

void update(int**p){
    p=p+1;
    //kuch change hoga ??
    *p=*p+1;

    **p=**p+1;
}
int main(){
    int i=5;
    int*p=&i;
    int**p2=&p;

    cout<<endl <<"Sab sahi chal raha hai"<<endl;

    cout<<"Printing p"<<p<<endl;
    cout<<"Address of p"<<&p<<endl;

    cout<<*p2<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;

    
    return 0;
}