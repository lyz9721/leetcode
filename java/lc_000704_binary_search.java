class Solution {
    public int search(int[] nums, int target) {
        int left = 0;
        int right = nums.length;
        int mid = 0;
        if(target<nums[0] || target > nums[right-1])
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

public class lc_000704_binary_search {
    public static void main(String[] args)
    {
        Solution so = new Solution();
        int[] arr1 = {-1,0,3,5,9,12};
        int target1 = 9;
        int[] arr2 = {-1,0,3,5,9,12};
        int target2 = 2;
        System.out.println(so.search(arr1,target1));
        System.out.println(so.search(arr2,target2));
    }
}
