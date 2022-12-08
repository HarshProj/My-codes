#include<iostream>
using namespace std;

// long long sqrt1(int n){
//     int s=0,e=n;
//     long long mid=s+(e-s)/2;
//     long long ans=-1;
//     while(s<=e){
//         if(mid*mid<n){
//             ans=mid;
//             s=mid+1;
//         }
//         else if(mid*mid>n){
//             e=mid-1;
//             ans=mid;
//         }
//         else{
//             return mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

//To print the decimal part also
long long sqrt1(int n){
    int s=0,e=n;
    long long mid=s+(e-s)/2;
    long long ans=-1;
    while(s<e){
        if(mid*mid<n){
            s=mid+1;
            ans=mid;
        }
        else if(mid*mid>n){
            e=mid-1;
            ans=mid;
        }
        else{
            return mid;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double moreprecision(int n,int precision,int tempsol){

    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    
    int n;
    cin>>n;
    int sq=sqrt1(n);
    // cout<<"Square root of "<<n<<"is :"<<sq<<endl;
    cout<<"Answer is "<<moreprecision(n,3,sq)<<endl;
    return 0;
}