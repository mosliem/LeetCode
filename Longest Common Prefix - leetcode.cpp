// solution with 0 ms Runtime
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

//solution with 4ms Runtime
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }
       return k;
    }
};
