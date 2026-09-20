class Solution {
public:
    int reverseDegree(string s) {
        int val=0,sum=0,pos=0,n=s.size();

        for(int i=0;i<n;i++){
            val=i+1;
            sum+=val*('z'-(s[i]-1));

            
        }
return sum;
    }
};