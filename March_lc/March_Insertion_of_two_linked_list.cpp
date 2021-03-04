#include <iostream>
#include <vector>

using std::vector;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA == NULL || headB == NULL)
            return NULL;

        auto temp1 = headA;
        auto temp2 = headB;

        int count1 = 0;
        int count2 = 0;

        while ((temp1->next) != NULL)
        {
            temp1 = temp1->next;
            count1++;
        }
        while ((temp2->next) != NULL)
        {
            temp2 = temp2->next;
            count2++;
        }

        int difference = abs(count1 - count2);

        temp1 = headA;
        temp2 = headB;

        for (int i = 0; i < difference; i++)
        {
            if (count1 > count2)
                temp1 = temp1->next;
            else
                temp2 = temp2->next;
        }

        while (temp1 != NULL && temp2 != NULL)
        {
            if (temp1 == temp2)
                return temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
    }
};