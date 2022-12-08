#include<iostream>
#include<vector>
using namespace std;

int countprimes(int n){
    int cnt=0;
    vector<bool>prime(n+1,true);

    prime[0]=prime[1]=false;

    for(int i=0;i<n;i++){
        if(prime[i]){
            cnt++;
            for(int j=2*i;j<n;j+=i){
                prime[j]=0;
            }
        }  
    }
    return cnt;
}
int main(){
    int n;
    cin>> n;
    cout<<countprimes(n)<<endl;
    return 0;
}