#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;

    void bark(){
        cout<<"Speaking"<<endl;
    }
};
class human{
    public:
    string colour;
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class hybrid :public animal,public human{

};
int main(){
    // dog d;
    // d.speak();
    hybrid h;
    h.bark();
    h.bark();
    return 0;
}