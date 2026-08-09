class Solution {
    public int longestConsecutive(int[] num) {
         if (num.length == 0) return 0;
       Arrays.sort(num);
       int count=1,ans=1;
       for(int i=1;i<num.length;i++){
        if(num[i]==num[i-1])continue;
        if(num[i]==num[i-1]+1)count++;
        if(num[i]!=num[i-1]+1)count=1;
        ans=Math.max(ans,count);
       }return ans;
    }
}