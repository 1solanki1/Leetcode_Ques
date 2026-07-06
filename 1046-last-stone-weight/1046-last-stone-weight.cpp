class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        priority_queue<int>st(arr.begin(),arr.end());
        
while(st.size()>1){
            int x=st.top();st.pop();
            int y=st.top();st.pop();

            if(x!=y)st.push( x-y);

        }
return st.empty() ?0:st.top(); 
    }
};