class Solution {
public:
    string reverseWords(string s) {
     string temp="";

     string ans="";
     for(int i=0;i<s.length();i++)
     {
         if(s[i]==' ')
         {
             reverse(temp.begin(),temp.end());
             ans+=temp;
             temp="";
             ans+=" ";
            
         }
         else {
             temp+=s[i];
         }
     }  

   reverse(temp.begin(),temp.end());
   ans+=temp;

     return ans;


    }
};