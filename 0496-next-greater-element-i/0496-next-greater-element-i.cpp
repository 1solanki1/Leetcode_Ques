class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
       int n=n1.size(),m=n2.size();
       unordered_map<int,int>mp;
      stack<int>st;

        
        for(int i=m-1;i>=0;i--){
            while(!st.empty()&& st.top()<n2[i])st.pop();
            mp[n2[i]]=st.empty()?-1:st.top();
            st.push(n2[i]);
    }

           vector<int>v;
           for(int i=0;i<n;i++){
           v.push_back(mp[n1[i]]);
           }
           
        return v;


    }
};