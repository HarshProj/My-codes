// // #include<iostream>
// // #include<math.h>
// // using namespace std;


// // // Definition for singly-linked list.
// // struct ListNode {
// //     int val;
// //     ListNode *next;
// //     ListNode() : val(0), next(nullptr) {}
// //     ListNode(int x) : val(x), next(nullptr) {}
// //     ListNode(int x, ListNode *next) : val(x), next(next) {}
// // };
 
// // class Solution {
// // public:
// //     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
// //         ListNode*l3;
// //         int num=0,i=0;
// //         while(l1->next!=NULL && l2->next!=NULL){
// //             num=(l1->val)*pow(10,i)+(l2->val)*pow(10,i);
// //             l1->next;
// //             l2->next;
// //         }
// //         while(num!=0){
// //             l3->val=num%10;
// //             l3->next;
// //             num/10;
// //         }
// //         return l3;
// //     }
// // };
// // int main(){
// //     ListNode *l1,*l2,*l3;
// //     Solution l4;
// //     l4.addTwoNumbers(l1,l2);

// //     return 0;
// // }
// #include<iostream>
// using namespace std;

// int minJumps(int arr[], int n){
//         // Your code here
//         int s=0 ;
//         int count=0;
//         while(s<n){
//             s=arr[s]+s;
//             if(arr[s]==0){
//                 return -1;
//             }
//             count++;
//         }
//         return count;
//     }
// int main(){
//     int arr[11]={1,3,5,8,9,2,6,7,6,8,9};
//     cout<<minJumps(arr,11);
//     //  int n=12,count=0;
//     //     while(n){
//     //         count++;
//     //         n=n/10;
//     //     }
//     //     cout<<count;
//     return 0;
// }
#include<iostream>
using namespace std;

int main(){
   char arr[5]={1,5,6,97,7};
   cout<<arr[3];
    return 0;
}