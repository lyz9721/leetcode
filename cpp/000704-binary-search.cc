#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;
        if(target<nums[0] || target > nums[right])
        {
            return -1;
        }
        while(left <= right)
        {
            mid = left + (right-left)/2;
            if(target == nums[mid])
            {
                return mid;
            }
            else if(target < nums[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return -1;
    }
}

int main()
{
    Solution so;
    vector<int> vec1 = {-1,0,3,5,9,12};
    int target1 = 9;
    vector<int> vec2 = {-1,0,3,5,9,12};
    int target2 = 2;
    cout<<so.search(vec1,target1)<<endl;
    cout<<so.search(vec2,target2)<<endl;
    return 0;
}
