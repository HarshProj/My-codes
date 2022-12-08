#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col =matrix[0].size();
        
        
        int count=0;
        int total=row*col;
        
        
        int startingrow=0;
        int startingcol=0;
        int endingrow=row-1;
        int endingcol=col-1;
        
        
        while(count < total){
            
            //Print starting row
            for(int index=startingcol; count < total && index<=endingcol;index++){
                ans.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow++;
            for(int index=startingrow; count < total && index<=endingrow;index++){
                ans.push_back(matrix[index][endingcol]);
                count++;
            }
            endingcol--;
              for(int index=endingcol; count < total && index<=startingcol;index--){
                ans.push_back(matrix[endingrow][index]);
                  count++;
            }
            endingrow--;
            for(int index=endingrow; count < total && index<=startingrow;index--){
                ans.push_back(matrix[index][startingcol]);
                count++;
            }
            startingcol++;
            
        }
        return ans;
    }
};
//correct one 
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> >& matrix) {
        
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row*col;
        
        //index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        
        
        while(count < total) {
            
            //print starting row
            for(int index = startingCol; count < total && index<=endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //print ending column
            for(int index = startingRow; count < total && index<=endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            //print ending row
            for(int index = endingCol; count < total && index>=startingCol; index--) {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //print starting column
            for(int index = endingRow; count < total && index>=startingRow; index--) {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        } 
        return ans;
    }
};

int main(){

    return 0;
}
//Homework rotate your matrix by 90