#include<iostream>
using namespace std;
class A{
    public:
    int num;
    void func1(){
        cout<<"Inside function 1"<<endl;
    }
};
class B : public A{
    public :
    void funct2(){
        cout<<"Indside function 2"<<endl;
    }
};
class C : public A{
    public:
    void funct3(){
        cout<<"Indside function 3"<<endl;
    }
};
int main(){

    return 0;
}