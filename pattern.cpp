#include<iostream>
using namespace std;

int main(){
    // int n,i=1;
    // cout<<"Enter the number"<<endl;
    // cin>>n;
    // while(i<n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //triangle paterns
    int n,row=1;
    int count=1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         cout<<"*";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // while(row<=n){
    //     int col=1;
    //     // count=row;//do the same thing bina variable banaye we can print i+j-1
    //     while(col<=row){
    //         cout<<(row+col-1)<<" ";
    //         col++;
    //         count=count+1;
    //     }
    //     cout<<endl;
    //     row++;
    // }
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         cout<<(row-col+1)<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // while(row<=n){
    //     int col=1;

    //     while(col<=n){
    //         char ch='A'+row-1;
    //         cout<<ch;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }
    // while(row<=n){
    //     int col=1;
    //     while(col<=n){
    //         char ch='A'+col-1;
    //         cout<<ch;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }
    // while(row<=n){
    //     int col=1;
    //     while(col<=n){
    //         char ch='A'+row+col-2;
    //         cout<<ch;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }
    /*
    A
    BC
    DEF
    GHIJ
    */
    // while(row<=n){
    //     int col=1;

    //     while(col<=row){
            
    //         char ch='A'+count-1;
    //         cout<<ch;
    //         count++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // while(row<=n){
    //     int col=1;
    //     // count=row;
    //     while(col<=row){
    //         char ch='A'+row+col-2;
    //         cout<<ch;
    //         // count++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }
    // int start;
    // while(row<=n){
    //     int col=1;
    //     char start='A'+n-row;
    //     while(col<=row){
    //         cout<<start;
    //         start++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    /*
    try 
    ABC
    BCD
    CDE
    by starting character
    */

//    while(row<=n){

//     //Print space
//     int space =n-row;

//     while(space){
//         cout<<" ";
//         space--;
//     }

//     //Print star
//     int col=1;
//     while(col<=row){
//         cout<<"*";
//     col++;
//     }
//     cout<<endl;
//     row++;
//    }

   /* print this
   ****
    ***
     **
      *
   */
    // while(row<=n){
    //     //Print space
    //     int space=row-1;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }

    //     //Print star
    //     int col=n-row+1;
    //     while(col){
    //         cout<<"*";
    //         col--;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    while(row<=n){
        //Print Space
        int space=n-row;
        while(space){
            cout<<" ";
            space--;
        }

        //Print Pattern
        int col=1;
        while(col<=row){
            cout<<col;
            col++;
        }
        // Printing pattern
        int j=row-1;
        while(j){
            cout<<j;
            j--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}