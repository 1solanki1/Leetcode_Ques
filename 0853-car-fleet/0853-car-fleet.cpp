class Solution {
public:
    int carFleet(int tar, vector<int>& pos, vector<int>& sp) {
        vector<pair<int,double>>v;

    for(int i=0;i<pos.size();i++){
        v.push_back({pos[i],(double)(tar-pos[i])/sp[i]});
        }

 sort(v.rbegin(),v.rend());
stack<double>st;

    for(int i=0;i<v.size();i++){
        if(st.empty()||v[i].second>st.top())  st.push(v[i].second);
        }

return st.size();
}
};