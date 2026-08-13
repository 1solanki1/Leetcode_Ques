class Solution {
    public int atmost(int[] arr, int k) {
        HashMap<Integer,Integer>mp=new HashMap<>();

        int l=0,n=arr.length,ans=0;

        for(int r=0;r<n;r++){
            mp.put(arr[r],mp.getOrDefault(arr[r],0)+1);

        while(mp.size()>k){
            mp.put(arr[l],mp.get(arr[l])-1);
            if(mp.get(arr[l])==0)mp.remove(arr[l]);
            l++;
        }
     ans+=r-l+1;}
     return ans;

        }
public int subarraysWithKDistinct(int[] arr, int k) {
            return atmost(arr,k)-atmost(arr,k-1);
            }
    }
