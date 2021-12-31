//runtime 40ms
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
         set<int> distinct;
         for(int a : nums)
             distinct.insert(a);
        int k =  distinct.size();
        nums.clear();
        for(int a : distinct)
            nums.push_back(a);
        return k;
    }
};


//runtime 18ms
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int res = 0;
        for(int i = 0 ; i < nums.size() ;i++)
        {
            if(nums[i] != nums[res])
            {
                res++;
                nums[res] = nums[i];
            }
        }
        return res+1;
    }
};
