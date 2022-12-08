vvector<int> bitwiseAnd(int n, int q, vector<int> arr, vector<int> queries)
{
    for(int i =1;i<n;i++){
		arr[i]=arr[i]&arr[i-1];
	}
	vector<int> ans;
	int qInd=0;
	while(q--){
	int max=0;
		for(int i=0;i<n;i++){
			if(arr[i]>=queries[qInd]){
				max=i+1;
			}
		}
		ans.push_back(max);
		qInd++;
	}
	
	return ans;
}