#include<iostream>
using namespace std;

int main(){
    // int a,i=2,sum=0;
    // cout<<"Enter the value of a"<<endl;
    // cin>>a;

    // while(i<=a){
    //     sum=sum+i;
    //     i=i+2;
    // }
    // cout<<"The sum of even number between 1 and a is"<<sum<<endl;

    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"Not prime for "<< i <<endl;
        }
        else{
            cout<<"Prime for "<< i <<endl;
        
        }
        i=i+1;
    }
    return 0;
}
//farenhenit to celcius conversion