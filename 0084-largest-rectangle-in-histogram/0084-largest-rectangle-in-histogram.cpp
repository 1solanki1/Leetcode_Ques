class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int maxarea=0,n=h.size(),next=0,prev=0;
        stack<int >st;
        for(int i=0;i<=n;i++){
            while((!st.empty())&&(n==i||h[i]<h[st.top()])){
                int ele=h[st.top()];    st.pop();
                next=i,prev=st.empty()?-1:st.top();
                maxarea=max(maxarea,ele*(next-prev-1));


        }st.push(i);

    }return maxarea ;
}};