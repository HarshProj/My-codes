#include<iostream>
using namespace std;

int pow(){
    int a , b;
    cin>>a>>b;
    int ans=1;
    for (int i = 1; i <= b; i++)
    {
        ans=a*ans;
    }
    return ans;
    
}
int main(){
    int a,b;
    cout<<pow();
    return 0;
}