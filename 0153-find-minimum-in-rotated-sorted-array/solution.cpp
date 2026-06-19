class Solution {
public:
    int findMin(vector<int> &num) {
        int n=num.size();
      int st=0;int end=n-1;
      while(st<end){
        int mid=st+(end-st)/2;
        if(num[mid]<num[end]){end=mid;}
        else{st=mid+1;}
      }
      return num[st];
    }
};

