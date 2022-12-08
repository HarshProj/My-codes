#include<iostream>
using namespace std;

// void AP(int n){
//     int nth=3*n+7;
//     cout<<"nth term of your ap is"<<nth;
// }
// void ones(int a,int b){
//     int count=0;
//     while(a && b){
//         if((a & 1)){
//             count++;
//         }
//         if((b & 1)){
//             count++;
//         }
//         a=a>>1;
//         b=b>>1;
//     }
//     cout<<"Number of 1s  is :"<<count<< endl;
// }


int fiboterm(int n){
    int a=0;
    int b=1,count;
    for(int i=1;i<=n;i++)
    {
        count=a;
        a=b;
        b=a+count;
    }
    return count;
}
int main(){
    // int n;
    // cin>>n;
    // AP(n);

    // int p,q;
    // cin>>p>>q;
    // ones(p,q);

    int a;
    cin>>a;
    cout<<fiboterm(a);

    return 0;
}