#include<bits/stdc++.h>
// #include "class.cpp"
using namespace std;
class hero{
    // char name[100];
    int health;
    public:
    char*name;
    char level;
    static int timetocomplete;
    // int health;
    // void print(){
    //     cout<<level<<endl;
    // }
    // // print();  
    hero(){
        cout<<"Simple Constructor called"<<endl;
        name=new char[100];
    }//here when we write our own constructor Then our default constructor will not called 
    // hero(int health){
    //     // cout<<"This :"<<this<<endl;
    //     this->health=health;
    // }
    hero(int health,char level){
        // cout<<"This :"<<this<<endl;
        this->level=level;
        this->health=health;
    }
    //copy constructor
    hero(hero&temp){
        // cout<<"Copy constructor called"<<endl;
        char*ch=new char[strlen(temp.name)*1];
        strcpy(ch,temp.name);
        this->name=ch;
        // this->name=temp.name;
        this->health=temp.health;
        this->level=temp.level;
    }//Here also the default copy constructor is removed
    void print(){
        cout<<endl;
        cout<<"[ Name:"<<this->name<<",";
        cout<<"Health"<<this->health<<",";
        cout<<"Level:"<<this->level<<"]";
        cout<<endl;
    }
    int gethealth(){
        return health;
    }  
    char getlevel(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch){
        level=ch;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }
    static int random(){
        // cout<<this->health<<endl;//this is nothing
        // cout<<health<<endl;//we can only access static members this will also gives error
        return timetocomplete;
    }
    //destructor
    ~hero(){
        cout<<"Destructor called"<<endl;
    }
};
int hero::timetocomplete=5;
int main(){


cout<<hero::timetocomplete<<endl;//use this to access static members
    hero a;
    cout<<a.timetocomplete<<endl;//Chal jayega but dont use it
    hero b;
    b.timetocomplete=10;
    cout<<a.timetocomplete<<endl;
    cout<<b.timetocomplete<<endl;
    // cout<<hero::random();


    //static
    // hero a;
    // //dynamic
    // hero*b=new hero();
    // //manually destructor called
    // delete b;


    // hero hero1;
    // hero1.sethealth(12);
    // hero1.setlevel('D');
    // char name[7]="Babbar";
    // hero1.setname(name);

    // // hero1.print();

    // //Use default copy constructor
    // hero hero2(hero1);
    // // hero hero2=hero1;
    // // hero2.print();

    // hero1.name[0]='G';
    // hero1.print();

    // hero2.print();

    // hero1=hero2;

    // hero suresh(70,'C');
    // suresh.print();
    // hero R(suresh);
    // R.print();

    /*
    //object created statically
    hero ramesh(10);
    //to verify that this is a pointer
    cout<<"Address of ramesh"<<&ramesh<<endl;

    ramesh.print();
    //dynamically
    hero*r=new hero(11);

    hero temp(22,'B');
    temp.print();


    //creation of object
    //This is static allocation
    // hero ramesh;
    // cout<<"Ramesh health is "<<ramesh.gethealth()<<endl;
    // ramesh.sethealth(70);v
    // // ramesh.health=70;
    // ramesh.level='A';
    // cout<<"Health:"<<ramesh.gethealth()<<endl;
    // cout<<"level:"<<ramesh.level<<endl;

    // cout<<"Size :"<<sizeof(h1)<<endl;

    //static allocation
    // hero a;
    // a.sethealth(80);
    // a.setlevel('B');
    // cout<<"level is:"<<a.level<<endl;
    // cout<<"health is :"<<a.gethealth()<<endl;

    // //Dynamically allocation
    // hero*b= new hero;
    // b->setlevel('A');
    // b->sethealth(70);
    // cout<<"Level"<<(*b).level<<endl;
    // cout<<"Health is"<<(*b).gethealth()<<endl;

    // cout<<"Level"<<b->level<<endl;
    // cout<<"Health is"<<b->gethealth()<<endl;
    */
    return 0;
}