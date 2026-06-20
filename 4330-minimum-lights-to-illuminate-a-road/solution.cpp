class Solution{
public:
    int minLights(vector<int>& lights){
        int n=lights.size();
        vector<int> diff(n+1,0);

        for(int i=0;i<n;i++){
            if(lights[i]){
                int l=max(0,i-lights[i]);
                int r=min(n-1,i+lights[i]);

                diff[l]++;
                diff[r+1]--;
            }
        }

        vector<int> vis(n);
        int cur=0;

        for(int i=0;i<n;i++){
            cur+=diff[i];
            vis[i]=(cur>0);
        }

        int ans=0;

        for(int i=0;i<n;){
            if(vis[i]){
                i++;
                continue;
            }

            int j=i;
            while(j<n&&!vis[j])j++;

            ans+=(j-i+2)/3;
            i=j;
        }

        return ans;
    }
};
