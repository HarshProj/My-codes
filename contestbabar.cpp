long long threeWaySplit(int n, vector<int> arr){
    // Write your code here.
    int s=0,e=n-1;
    int sum1=arr[0],sum2=arr[n-1];
    long long  ans=0;
    while(e>s){
        if( sum1<sum2){
            sum1+=arr[s+1];
            s++;
        }else if(sum1>sum2){
            sum2+=arr[e-1];
            e--;
        }else{
            ans=sum1;
            sum1+=arr[s+1];
            s++;
        }
    }
    return ans;
}



long long threeWaySplit(int n, vector<int> arr){
    // Write your code here.
    int h = n-1, l=0;
    int lsum = arr[0], rsum = arr[n-1];
    long long ans =0;
    while(h>l){
        if(lsum<rsum){
            lsum+=arr[l+1];
            l++;
        }else if(lsum>rsum){
            rsum+=arr[h-1];
            h--;
        }else{
            ans = lsum;
            lsum+=arr[l+1];
            l++;
        }
    }
    return ans;
}