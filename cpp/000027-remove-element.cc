#include "mod.h"
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j=0;
        int res = nums.size();
        while(j<nums.size())
        {
            if(nums[j]==val)
            {
                j++;
                --res;
            }
            else
            {
                nums[i++] = nums[j++];
            }
        }
        return res;
    }
};