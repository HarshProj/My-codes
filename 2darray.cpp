#include<iostream>
using namespace std;

int main(){
    
    int arr[3][4];

    //cstm
    int arr2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[3][4]={{1,2,3,0},{4,5,6,55},{7,8,9,77}};
//coloumn wise input 
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
       }
    }
    return 0;
}