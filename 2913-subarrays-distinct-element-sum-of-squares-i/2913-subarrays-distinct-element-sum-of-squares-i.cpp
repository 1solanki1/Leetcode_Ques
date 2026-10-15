class Solution {
public:
    int sumCounts(vector<int>& num) {
        int sum=0;
        int n=num.size();
        for(int i=0;i<n;i++){
            set<int>s;
    
        for(int j=i;j<n;j++){
            s.insert(num[j]);
            int count=s.size();
            sum+=count*count;

            }
}return sum;
    }
};