class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt=0;int sum=0;int n=gain.size();

        for(int i=0;i<n;i++){
            sum+=gain[i];
            alt=max(alt,sum);
        }return alt;
    }
};
