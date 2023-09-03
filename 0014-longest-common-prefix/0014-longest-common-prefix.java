class Solution {
    public String longestCommonPrefix(String[] strs) {
        String s="";
        Arrays.sort(strs);
        int n=strs.length-1;
        String s1=strs[0];
        String s2=strs[n];
        int i=0;
        while(i<s1.length() && i<s2.length())
        {
            if(s1.charAt(i)==s2.charAt(i))
            {
                i++;
            }
            else
            break;
        }
        return s1.substring(0,i);
    }
}