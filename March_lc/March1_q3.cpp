#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        // sort the elements so that nums[i] == i
        std::sort(nums.begin(), nums.end());

        // check if all are at their positions
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i)
                return i;
        }

        // check if nums.size() is also present, if not return it
        bool flag = false;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums.size() == nums[i])
            {
                flag = true;
                break;
            }
        }

        if (!flag) return nums.size();
        else return 0;
    }
};