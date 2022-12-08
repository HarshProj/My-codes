#include<iostream>
using namespace std;

int saydigit(int n,string*arr){

    //Base case
    if(n==0){
        return;
    }

    //processing
    int digit=n%10;
    n=n/10;

    //Recursive call
    saydigit(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){

    string arr[10]={"zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cin>>n;
    saydigit(n,arr);
    return 0;
}