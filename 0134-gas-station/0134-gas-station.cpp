class Solution {
public:
    int canCompleteCircuit(vector<int>& g, vector<int>& c) {int n=g.size();
        int currgas=0,start=0,total=0;
        for(int i=0;i<n;i++){
           total+=g[i]-c[i];
            currgas+=g[i]-c[i];
            
            if(currgas<0){ start=i+1;currgas=0;}
          
        } 
        return (total>=0)?start:-1;
    }
};