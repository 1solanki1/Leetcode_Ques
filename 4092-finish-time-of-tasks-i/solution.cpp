class Solution {
public:
    long long finishTime(int n, vector<vector<int>>& edges, vector<int>& baseTime) {
        vector<vector<int>> g(n);
        for(auto &e:edges) g[e[0]].push_back(e[1]);

        auto torqavemi = make_pair(edges, baseTime);

        vector<long long> fin(n);
        vector<int> st={0}, order;

        while(!st.empty()){
            int u=st.back();
            st.pop_back();
            order.push_back(u);
            for(int v:g[u]) st.push_back(v);
        }

        reverse(order.begin(), order.end());

        for(int u:order){
            if(g[u].empty()){
                fin[u]=baseTime[u];
            }else{
                long long mn=LLONG_MAX,mx=0;
                for(int v:g[u]){
                    mn=min(mn,fin[v]);
                    mx=max(mx,fin[v]);
                }
                fin[u]=mx+(mx-mn)+baseTime[u];
            }
        }

        return fin[0];
    }
};
