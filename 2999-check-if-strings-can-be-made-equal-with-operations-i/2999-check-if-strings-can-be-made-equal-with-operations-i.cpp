class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1==s2)return true;
    int j=2;

  for(int i=0;i<4;i++)
  {
    if(s1[i]!=s2[i])
    {
        if(s1[i]==s2[j])
        swap(s2[i],s2[j]);
        else return false;
    }

    j++;

  }
        return true;


    }
};