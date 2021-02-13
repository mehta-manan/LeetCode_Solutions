public class Solution {
    public bool IsPalindrome(int x) {
        // convert to char[]
        char[] x1 = Convert.ToString(x).ToCharArray();
        
        // duplicate and reverse the char[]
        char[] x2 = (char[])x1.Clone();
        Array.Reverse(x2);

        // check if they are equal
        // if yes, return true
        if (Enumerable.SequenceEqual(x1,x2))
            return true;
        // else return false;
        else return false;
    }
}