class Solution {
public:
    int searchInsert(vector<int>& nums, int tar) {
        int n=nums.size();int st=0,end=n-1;

        int mid=(st+end)/2;
        while(st<=end){int mid=(st+end)/2;
            if(nums[mid]==tar){
                return mid;
                
            }
            else if(nums[mid]<tar){st=mid+1;}
            else{end=mid-1;}
        }
return st;
    }
};
