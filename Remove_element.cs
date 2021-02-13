public class Solution
{
    public int RemoveElement(int[] nums, int val)
    {
        // initialize new length to 0
        int newLength = 0;

        // traverse through nums array
        for (int i = 0; i < nums.Length; i++)
        {
            // if the element is same as val
            if (val == nums[i])
            {
                // change element to -1
                nums[i] = -1;
                // increment the new length by 1
                newLength++;
            }
        }
        // sort in descending order to shift all -1 to right
        Array.Sort(nums);
        Array.Reverse(nums);

        // return new length 
        return nums.Length - newLength;
    }
}