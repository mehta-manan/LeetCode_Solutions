#include <iostream>
using std::string;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int length = 0;

        if (s == " ")
            return length;

        // iterate through string from end to beginning
        for (int i = s.size() - 1; i >= 0; i--)
        {
            // ignore blank spaces at end
            if (s[i] == ' ' && length == 0)
                continue;

            // if it's not a blank space, increment length by one
            else if (s[i] != ' ')
                length++;
                
            // if the blank space is between words, break
            else if (s[i] == ' ' && length!= 0)
                break;
        }

        // return length;
        return length;
    }
};