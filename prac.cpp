#include <iostream>
#include <vector>
using namespace std;
vector<int> newarr(vector<int>& arr1,int n){
    vector<int>arr3; 
        for(int j=0;j<arr1.size();j++){
            if(arr1[j]==n){
                arr3.push_back(arr1[j]);
            }
            
        }
        return arr3;

}
vector<int> vectroinput(vector<int>&arr,int a){
    for(int i=0;i<a;i++){
        cout<<"ele"<<i<<endl;
       int n;
       cin>>n;
       arr.push_back(n);
    }
    return arr;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t){
	    vector<int>arr1;
	    vector<int>arr2;
	    int a;
	    int b;
	    cin>>a;
	    arr1=vectroinput(arr1,a);
	    cin>>b;
	    arr2=vectroinput(arr2,b);
	    
	    vector<int>arr3=arr1;
        for(int i=0;i<=arr2.size();i++){
            arr3=newarr(arr3,arr2[i]);
        }

        for(int i=0;i<arr3.size();i++){
            cout<<arr3[i]<<"  ";
        }
	   #include <iostream>
using namespace std;
//Ball and boxes
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t){
	    int n,k,a;
	    cin>>n>>k;
	    a=(k*(k+1))/2;
	    
	    if(a>n){
	        cout<<"NO"<<endl;
	    }
	    else{
	       cout<<"YES"<<endl;
	    }
	    t--;
	}
	return 0;
}

	    
	}
	return 0;
}
