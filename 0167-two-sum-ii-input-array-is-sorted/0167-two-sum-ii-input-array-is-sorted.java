class Solution {
    public int[] twoSum(int[] num, int tar) {int sum=0;
int st=0,end=num.length-1;

   while(st<end){
        int total=num[st]+num[end];

if(total==tar)  return new int[]{st+1,end+1};
else if(total<tar)st++;
else end--;
}

return new int [] {-1,-1};
    }
}