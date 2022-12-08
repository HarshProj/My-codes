#include<iostream>
using namespace std;

class Human {
    public:
    int heigth;
    int weigth;
    int age;

    public:
    int getage(){
        return this->age;
    }
    void setweight(int w){
        this->weigth=w;
    }
};

class Male : protected Human{
    public:
       string colour;

       void sleep(){
       cout<<"Male sleeping"<<endl;
       }
       int getheight(){
        return this->heigth;
       }
};
int main(){
    Male object1;
    cout<<object1.getheight()<<endl;







    
    // Male object1;
    // cout<<object1.age<<endl;
    // cout<<object1.weigth<<endl;

    // cout<<object1.colour<<endl;

    // object1.sleep();
    // object1.setweight(84);
    // cout<<object1.weigth<<endl;
     
    return 0;
}