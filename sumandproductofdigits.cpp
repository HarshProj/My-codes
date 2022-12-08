#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0,pro=1;
    

    while(n!=0){
        int rem=n%10;
        sum=sum+rem;
        pro=pro*rem;
        n=n/10;
    }

    return 0;
}