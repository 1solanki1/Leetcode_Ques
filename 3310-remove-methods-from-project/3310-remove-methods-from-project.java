class Solution {
    public List<Integer> remainingMethods(int n, int k, int[][] invo) {
        List<List<Integer>> l1=new ArrayList<>();//build adjancy list
        for(int i=0;i<n;i++)l1.add(new ArrayList<>());
        for(int [] edge:invo){l1.get(edge[0]).add(edge[1]);   }

        boolean []issus=new boolean[n];//mark suspisious methods
        Deque<Integer>st=new ArrayDeque<>();

        st.push(k);
        issus[k]=true;
//dfs
        while(!st.isEmpty()){
            int curmethod =st.pop();
            for(int v:l1.get(curmethod))
        if(!issus[v]){issus[v]=true;st.push(v); }
            }

//check if one method is safe and other is suspision
        for(int    [] edge:invo){
           if(!issus[edge[0]]&&issus[edge[1]])  {
                ArrayList<Integer>ans=new ArrayList<>();
           for(int i=0;i<n;i++) ans.add(i); return ans;}
           }

//return safe method
            ArrayList<Integer>ans=new ArrayList<>();
            for(int i=0;i<n;i++)
            if(!issus[i])ans.add(i);
            return ans;
            }

}