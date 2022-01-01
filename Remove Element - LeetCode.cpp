class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0 , size = nums.size() , MAX_INT = 110;
        for(int i = 0 ; i < size ; i++)
        {
            if(nums[i] == val)
            {
                k++;
                nums[i] =110 ;
            }
        }
        sort(nums.begin(), nums.end());
        return size - k;
    }
};
