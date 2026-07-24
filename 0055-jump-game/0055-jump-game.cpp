class Solution {
public:
    bool canJump(vector<int>& arr) {
        int n=arr.size(), far=0;
        for(int i=0;i<n;i++){
        
            if(i>far)return false;
            else    far=max(far,i+arr[i]);

        }
return true; 
    }
};