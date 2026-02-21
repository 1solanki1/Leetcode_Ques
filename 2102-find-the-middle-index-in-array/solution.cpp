class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum1=0;int sum2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum2+=nums[i];
        }
        for(int j=0;j<n;j++){
            sum2-=nums[j];
        
        if(sum1==sum2){
            return j;
        }
        sum1+=nums[j];
    }
    return -1;
    
}
};
