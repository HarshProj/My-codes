#include<iostream>
using namespace std;

int main(){

    // while(1){
    //     switch(2){
    //         case 1:
    //         cout<<"This is case 1"<<endl;
    //         case 2:
    //         cout<<"This brings an infinit loop" << endl;
    //         exit(5);
    //     }
    // }
    // int a,b;
    // char c;
    // cout<<"Enter the value of a"<< endl;
    // cin>>a;
    // cout<<"Enter the value of b"<< endl;
    // cin>>b;
    // cout<<"Enter the operation you want to perform"<<endl;
    // cin>>c;

    // switch(c){
    //     case  '*':
    //     cout<<a<<"*"<<b<<"="<<a*b;
    //     break;
    //     case '/':
    //     {cout<<a<<"/"<<b<<"="<<a/b;}//WE can use blocks
    //     break;
    //     case '+':
    //     cout<<a<<"+"<<b<<"="<<a+b;
    //     break;
    //     case '-':
    //     cout<<a<<"-"<<b<<"="<<a-b;
    //     break;

    // }
    int a , sum=0;
    cin>>a;
    switch(1){
        case 1:
        cout<<"Number of 100s notes"<<a/100<< endl;
        sum=a-((a/100)*100);
        case 2:
        cout<<"Number of 50s notes"<<sum/50<< endl;
        sum=sum-((sum/50)*50);
        case 3:
        cout<<"Number of 20s notes"<<sum/20<< endl;
        sum=sum-((sum/20)*20);
        case 4:
        cout<<"Number of 1s notes"<<sum/1<< endl;
        sum=sum-(sum/1);
        

    }
    return 0;
}