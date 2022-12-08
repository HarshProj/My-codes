#include<iostream>
using namespace std;

#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    //  Write your code here.
    if(nStairs < 0){
        return 0;
    }
    else if(nStairs==0){
        return 1;
    }
    int ans= countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
    return ans;
} 
int main(){

    return 0;
}