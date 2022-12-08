#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Solution {

public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int>v;
        vector<int>v2;
        int row=mat.size();
        int col=mat[0].size();
        
        int maxrow=0;
        int maxcol=0;
        int k=0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col-1;j++){
                maxrow=max(mat[i][j],mat[i][j+1]);
                if(maxrow==mat[i][j]){
                    k=j;
                }
            } 
            v2.push_back(i*10+k);
        }
        k=0;
         for(int i=0;i<col-1;i++){
            for(int j=0;j<row-1;j++){
                maxrow=max(mat[j][i],mat[j+1][i]);
                if(maxrow==mat[j][i]){
                    k=j;
                }
            } 
            v2.push_back(i*10+k);
        }
        sort(v2.begin(),v2.end());
        for(int i=0;i<v2.size()-1;i++){
            if(v2[i]==v2[i+1]){
                int sum=v2[i]%10;
                int num=v2[i]/10;
                v.push_back(sum);
                v.push_back(num);
                return v;
            }
        }
        return v;
    }
        
    
};

int main(){

    return 0;
}