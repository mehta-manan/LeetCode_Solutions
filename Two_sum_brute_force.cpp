#include <vector>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        // answer vector
        std::vector<int> answerVector;

        // traverse through nums vector
        for (int i = 0; i < nums.size(); i++)
        {
            // traverse through nums vector, one element beyond nums[i]
            for (int j = i + 1; j < nums.size(); j++)
            {
                // if target found
                if (target == (nums[i] + nums[j]))
                {
                    // push both indicies
                    answerVector.push_back(i);
                    answerVector.push_back(j);

                    // return when found
                    return answerVector;
                }
            }
        }

        // for sake of return type
        return answerVector;
    }
};