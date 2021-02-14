#include<iostream>
#include<vector>

class Solution
{
public:
    int searchInsert(std::vector<int> &nums, int target)
    {
        // if last element is less than target,
        // then target should be at last of nums vector
        if (nums[nums.size()-1] < target)
            return nums.size();

        // if first element is greater than target,
        // then target should be at beginning of nums vector
        else if(nums[0] > target)
            return 0;

        for (int i = 0; i < nums.size();i++)
        {
            // if element if found or if element is greater than target
            // return element index
            if (nums[i] == target || nums[i] > target)
                return i;
        }

        // for sake of return
        return 0;
    }
};