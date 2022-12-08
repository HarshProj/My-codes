#include<iostream>
using namespace std;
//Function overloading
class A{
    public:
    void sayhello(){
        cout<<"Hello harsh chauhan"<<endl;
    }
    int sayhello(char h){
        cout<<"Hello harsh chauhan"<<endl;
        return h;
    }
    void sayhello(string h){
        cout<<"Hello"<<h<<endl;
    }
};
//Operato overloading 
class B{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }
    void operator+(B &obj){
       /* int value1=this->a;
        int value2=obj.a;
        cout<<"Output"<<value2-value1<<endl;
        */
       cout<<"Hello harsh its jarvis here"<<endl;
    }
    void operator() (){
        cout<<"I am bracket "<<this->a<<endl;
    }
};
class animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class dog:public animal{
    void speak(){
        cout<<"Bakring"<<endl;
    }
};
int main(){
    B obj1,obj2;
    obj1.a=4;
    obj2.a=1;
    obj1+obj2;
    obj1();
    return 0;
}