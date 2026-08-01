class Solution {
    public boolean predictTheWinner(int [] nums) {
        // if p1>=p2 return true else return false;
        int p1=curplayer(nums,0,nums.length-1);
if(p1>=0)   return true;
else        return false;}



private int curplayer(int[] nums,int l,int r){
if(l==r)return nums[l];
int chooseleft=nums[l]-curplayer(nums,l+1,r);
int chooseright=nums[r]-curplayer(nums,l,r-1);

return Math.max(chooseleft,chooseright);
}
}