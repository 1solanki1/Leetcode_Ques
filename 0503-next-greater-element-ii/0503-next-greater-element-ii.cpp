class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& num) {
        int n=num.size();
       vector<int>v(n,-1);
        stack<int>st;
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty()&&st.top()<=num[i%n])st.pop();
        
          if(i<n)v[i]=st.empty()?-1:st.top();
            st.push(num[i%n]);
  } 
        return v;
    }
};