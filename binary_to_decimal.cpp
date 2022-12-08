#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the  value of n: " <<endl;
    cin>>n;
    int ans=0;//Note in the vs code we have to use ans=1 in online compiler we have to assign ans=0
    int i=0;
    
    while(n != 0){
        int bit= n & 1 ;
        ans=(bit * pow(10,i) ) + ans ;

        n = n >> 1;
        
        i++;
    }
    cout<<"Answer is : "<< ans << endl;

    // //For negative integers
    // n=-n;
    // cout<<(n & 1);
    // while(i<7){
    //     int bit=(n & 1);
    //     cout<<bit<<endl;
    //     if(bit==1){
    //         bit=0;
    //         ans = ( bit*pow(10,i)) +ans;

    //     }
    //     else{
    //         bit=1;
    //         ans = ( bit*pow(10,i)) +ans;
    //         cout<<ans<<endl;
    //     }
    //     i++;
    //     n=n>>1;
    // }
    // cout<<ans+1<<endl;

    // long long int n,i=0,ans=0;
    // cin>>n;

    // if(n<0){
    //    n=pow(2,16)+n; 
    // }
    // // cout<<n;
    // while(n!=0){
    //     int bit=(n&1);
    //     ans=(bit*pow(10,i))+ans;
    //     n=n>>1;
    //     i++;
    //     // cout<<ans<<endl;
    // }
    // cout << ans;




    /*       Via google                */

    // int n,c,k;

    // cout<<"Enter an integer in decimal number system \n";
    // cin>>n;
    // cout<<n<<" In binary number systmis:\n";
    // for(c=31;c>=0;c--){
    //     k=n>>c;
    //     if(k&1){
    //         cout<<"1";
    //     }
    //     else{
    //         cout<<"0";
    //     }
    // }
    
    return 0;
}