class Solution {
public:
    long long dp[16][11][2];

    long long dfs(int pos,int prev,bool started,bool tight,
                  string &s,int k){
        if(pos==s.size()) return started;

        if(!tight&&dp[pos][prev+1][started]!=-1)
            return dp[pos][prev+1][started];

        int lim=tight?(s[pos]-'0'):9;
        long long ans=0;

        for(int d=0;d<=lim;d++){
            bool nt=tight&&(d==lim);

            if(!started&&d==0){
                ans+=dfs(pos+1,-1,false,nt,s,k);
            }else{
                if(prev==-1||abs(prev-d)<=k)
                    ans+=dfs(pos+1,d,true,nt,s,k);
            }
        }

        if(!tight)
            dp[pos][prev+1][started]=ans;

        return ans;
    }

    long long solve(long long x,int k){
        if(x<=0) return 0;

        string s=to_string(x);
        memset(dp,-1,sizeof(dp));

        return dfs(0,-1,false,true,s,k);
    }

    long long goodIntegers(long long l,long long r,int k) {
        auto denoluvira=make_tuple(l,r,k);
        return solve(r,k)-solve(l-1,k);
    }
};
