#include<iostream>
using namespace std;
//Printing  row wise
void printsum(int arr[][3],int row,int col){

    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col] ;
        }
        cout<<sum<<" ";
    }
}
//Printing  col wise sum
void printcolsum(int arr[][3],int row,int col){

    for(int col=0;col<3;col++){
        int sum=0;
        for(int row=0;row<3;row++){
            sum+=arr[row][col] ;
        }
        cout<<sum<<" ";
    }
}


int largestsum(int arr[][3],int row,int col){
    int maxi=INT32_MIN;
    int rowindex =-1;
     for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col] ;
        }
        if(sum>maxi){
            maxi=sum;
            rowindex =row;
        }
    }

    cout<<"The maximum sum is "<<maxi<<endl;
    return rowindex;
    
}
int main(){

    int arr[3][3];
    cout<<"Enter the elements"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>> arr[row][col];
        }
    }

    cout<<"Printing the array"<<endl;
    printsum(arr,3,3);
    
    return 0;
}