class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
      string prefix = strs[0];
      for(int i = 1 ; i <  strs.size(); i++)
      {  
        for(int j = 0 ; j < strs[i].size(), j < prefix.length(); j++)
        {
          if(strs[i][j] != prefix[j])
          {
              prefix = prefix.substr(0, j);
              break;
          }
        }
      }
    return prefix;
    }
};
