class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=0;
        for(int x:piles){high=max(high,x);}
        while(low<high){
            int mid=low+(high-low)/2;int hours=0;
            for(int x:piles){
                hours+=(x+mid-1)/mid;
                if(hours>h){break;}}
                if(hours<=h){
                    high=mid;
                    }else{
                        low=mid+1;
                    }}
                    return low;
        
    }
};
