class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int tar) {
      int m=matrix.size();
      int n=matrix[0].size();
      int st=0;int end=m*n-1;
      while(st<=end){
        int mid=st+(end-st)/2;
        int val=matrix[mid/n][mid%n];

        if(val==tar)return true;
        if(val<tar){st=mid+1;}
        else{end=mid-1;} 
    }return false;}

};
