class Solution {
public:

int findrightmost(vector<int>& nums, int tar,int n){
    int rightmost=-1;
    int st=0,end=n-1;

    while(st<=end){int mid=st+(end-st)/2;

    if(nums[mid]==tar){
       rightmost=mid;
        st=mid+1;}
        else if(nums[mid]<tar){
        st=mid+1;

        }
        else{end=mid-1;}
    }return rightmost;
}


int findleftmost(vector<int>& nums, int tar,int n){
    int leftmost=-1;
    int st=0,end=n-1;

    while(st<=end){int mid=st+(end-st)/2;

    if(nums[mid]==tar){
        leftmost=mid;
        end=mid-1;}
        else if(nums[mid]<tar){
        st=mid+1;

        }
        else{end=mid-1;}
    }return leftmost;
}
    vector<int> searchRange(vector<int>& nums, int tar) {
        int n=nums.size();
        int leftmost=findleftmost(nums,tar,n);
        int rightmost=findrightmost(nums,tar,n);
        return {leftmost,rightmost};


    }
};
