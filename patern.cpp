#include<iostream>
using namespace std;

int main(){


    int row=1,col=1,n,count=1;
    cin>>n;
    while(row<=n){
        col=1;
        while(col<row){
            cout<<" ";
            col++;
        }
        col=n;
        while(col>=row){
            cout<<count;
            col--;
            count++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}