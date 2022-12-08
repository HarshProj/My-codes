#include<iostream>
using namespace std;

//1 for prime
bool isprime(int a){

    for(int i=2;i<a;i++){

        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
//note void ke case me return kar sakte hai but kuch value nahi deni hogi like bass likhna hoga ki return;
int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"Is a prime number";
    }
    else{
        cout<<"Not a prime number";
    }

    return 0;
}