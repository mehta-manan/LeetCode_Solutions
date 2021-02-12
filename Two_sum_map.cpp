#include <vector>
#include <map>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        // map - [element, index]
        std::map<int, int> ei;

        // answer vector
        std::vector<int> answerVector;

        // traverse through each element in nums vector
        for (int i = 0; i < nums.size(); i++)
        {
            // get the required number to be added so that it's equal to target
            // for each element in the nums vector
            int required_num = target - nums[i];

            // if required number is not in map
            if (ei.find(required_num) == ei.end())
            {
                // add current number in map with its index
                ei[nums[i]] = i;
            }
            // if required number is in map
            else
            {
                // get required number's value or index and push to answer vector
                answerVector.push_back(ei[required_num]);
                // get current index and push to answer vector
                answerVector.push_back(i);
            }
        }

        // return answer vector
        return answerVector;
    }
};