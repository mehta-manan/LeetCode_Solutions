#include <vector>

using std::vector;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        // iterate through nums vector
        for (auto it = nums.begin(); it != nums.end(); it++)
        {
            // check if not pointing to the last of vector
            if (it != nums.end() - 1)
            {
                // check for all further duplicates 
                // special case for 2 unit size vector - iterator should not be checked/equated with pointer refering outside the vector length.
                while (*it == *(it + 1) && it != nums.end() - 1)
                {
                    // remove duplicates
                    nums.erase((it + 1));
                }
            }
        }

        //return new size
        return nums.size();
    }
};