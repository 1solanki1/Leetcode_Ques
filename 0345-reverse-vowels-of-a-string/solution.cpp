class Solution {
public:

bool vowel(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U';

}
    string reverseVowels(string s) {
        int n=s.size();
        int st=0;int end=n-1;
        while(st<end){
            if(vowel(s[st ] )&& vowel(s[end])) {
                
                swap(s[st],s[end]);
                 st++;end--;
                 }

             
         else if(!vowel(s[st]))    { st++;}
         else if(!vowel(s[end]))    { end--;}
        

            }
        
      return s;  

    }
};
