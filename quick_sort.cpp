#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot = arr[s];

    int cnt = 0;
     for(int i=s+1;i<=e;i++){
        if(arr[i] <=pivot){
            cnt++;
        }
    }

    //Place pivot at right position
    int pivotindex = s+cnt;
    swap(arr[pivotindex],arr[s]);

    //Left and right wala part sambhal lo
    int i=s,j=e;

    while(i<pivotindex && j> pivotindex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }

    }
    return pivotindex;
}
void quicksort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }

    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    //Right part sort
    quicksort(arr,p+1,e);
}
int main(){
     int arr[8]={24 ,18, 38, 43, 14, 40, 1, 54};
    int n=8;

    quicksort(arr , 0 , n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    return 0;
}
/*
#include <bits/stdc++.h> 
int part(vector<int> &arr,int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(pivot>=arr[i]){
            cnt++;
        }
    }
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);
    int i=s;
    int j=e;
    while(pivotindex>i && pivotindex<j ){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void sort(vector<int> &arr,int s,int e){
    if(s>=e){
        return ;
    }
    int p=part(arr,s,e);
    sort(arr,s,p-1);
    sort(arr,p+1,e);
    
}
vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    vector<int>v=arr;
   
    sort(v,0,v.size()-1);
    return v;
}

*/