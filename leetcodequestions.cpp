#include<iostream>
using namespace std;

int main(){
    // int n;
    // int rem,ans=0,i=0;
    // int anss=0;

    // cin>>n;
    
    // while(n!=0){
    //     rem=n%10;
    // if(ans>INT32_MAX||ans<INT32_MIN){
    //     return 0;
    // }
    //     ans=(ans*10)+rem;
    //     n=n/10;
    // }

    // cout<<ans;

    //Compliment of base 10 integer
    // while(n!=0){
    //     int bit=(n&1);
    //     if(bit){
    //         bit=0;
            
    //     }
    //     else{
    //         bit=1;
    //         ans=bit*pow(10,i)+ans;
    //         anss=pow(2,i)+anss;
    //     }
    //     i++;
    //     n=n>>1;
    // }
    // cout<<anss;

    //same question with different concept
    // int n;

    // cin>>n;
    // int m=n;
    // int mask=0;
    // if(n==0){
    //     cout<<1;
    //     return 0;
    // }
    // while(m!=0){
    //     mask=(mask<<1)|1;
    //     m=m>>1;
    // }
    // int ans=(~n) & mask;
    // cout<<ans;
    // return 0;
    int n,p=1;
    cin>>n;

    while(p<=n){
        if(p==n){
            cout<<"This number is power of 2"<<endl;
            return true;
        }
        if(p<(INT32_MAX)/2){
            p=p*2;
        }
        // i++;

    }
    //OR
    // for (int i = 0; i <= 30; i++)
    // {
    //     if(p==n){
    //         cout<<"This number is power of 2"<<endl;
    //         return true;
    //     }
    //     if(p<(INT32_MAX)/2){
    //         p=p*2;
    //     }
    // }
    return false;
}