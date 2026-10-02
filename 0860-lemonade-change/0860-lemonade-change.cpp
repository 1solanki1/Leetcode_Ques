class Solution {
public:
    bool lemonadeChange(vector<int>& bi) {
        int five=0,ten=0,b=bi.size();
        for(int i=0;i< b;i++){
    if(bi[i]==5)five++;
else if(bi[i]==10)  {if(!five--)return false;ten++; }
else if(ten&&five){ten--;five--;}
else if(five>=3)five-=3;
else return false;
        }return true;

    }
};