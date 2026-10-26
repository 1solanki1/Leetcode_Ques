class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size(),  maxprofit=0,minprice=p[0];

      for(int i=0;i<n;i++){
            if(p[i]<minprice)minprice=p[i];
            maxprofit=max(maxprofit,p[i]-minprice);

       }
return maxprofit;

    }
};