#include <iostream>
#include<vector>
using namespace std;

bool ispossible(vector<int> &vec,int mid,int m){
	int sum=0;
	for(int i=0;i<vec.size();i++){
		if(vec[i]>mid ||sum<m){
			sum=vec[i]-mid+sum;
		}
		else{
			if(sum>m){
				return false;
			}
		}
		
	}
	return true;
}

int maxheight(vector<int> &vec1,int n,int m){
	int s=0,e=n-1,ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(ispossible(vec1,mid,m)){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int main() {
	// your code goes here
	int n,m;
	vector<int>vec1;
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++){
		cin>>vec1[i];
	}
	maxheight(vec1,n,m);
	return 0;
}