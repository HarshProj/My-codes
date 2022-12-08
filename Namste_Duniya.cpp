#include<iostream>
using namespace std;

int main(){
    cout<<"Namaste duniya"<<endl;
    int a=cin.get();//this will give ASCII value of inputed number like '1','2' etc.
    cout<<"The value of a is"<<a<<endl;  
    char c;
    cout<<"Enter any character";
    cin>>c;
    if(c>='a' && c<='z'){
        cout<<"It is an lower case"<<endl;
    }  
    else if(c>='A' && c<='Z'){
        cout<<"It is an upper case"<<endl;
    }

    else if(c>='0' && c<='9'){
        cout<<"Digit"<<endl;
    }
    return 0;
}