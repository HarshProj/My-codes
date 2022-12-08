#include<iostream>
using namespace std;

int fact(int n){
     int fact=1;
    for (int i = 1; i <=n; i++)
    {
       fact=fact*i;
       
    }
    return fact;
}
int combination(int a,int b){
    
   int combi=(fact(a))/(fact(b)*fact(a-b));
   return combi;
    
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"Answer is :"<<combination(n,r) <<endl;

    return 0;
}