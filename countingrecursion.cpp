#include<iostream>
using namespace std;
void counting(int n){
    if(n==0){
        return ;
    }
    // counting(n-1);
    cout<<n<<endl;
    
    counting(n-1);
}
int main(){
    
    return 0;
}