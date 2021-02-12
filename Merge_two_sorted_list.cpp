#include <iostream>
#include <vector>
#include <algorithm>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        // temporary pointer to list 1
        ListNode *tempListNodeRef = l1;

        // if both list points to NULL, return a null pointer
        if (l1 == NULL && l2 == NULL)
            return tempListNodeRef;

        // if list 1 is NULL, return list 2
        else if (l1 == NULL)
            tempListNodeRef = l2;

        // if list 2 is NULL, return list 1
        else if (l2 == NULL)
            tempListNodeRef = l1;

        // if both list contains data
        else
        {
            // traverse through list 1 to last node
            while ((tempListNodeRef->next) != NULL)
            {
                tempListNodeRef = tempListNodeRef->next;
            }

            // join both linked lists
            tempListNodeRef->next = l2;

            // reset temporary pointer to list 1
            tempListNodeRef = l1;
        }

        // vector to store both combined lists data
        std::vector<int> vect;

        // traverse again and fetch data
        while (tempListNodeRef != NULL)
        {
            vect.push_back(tempListNodeRef->val);
            tempListNodeRef = tempListNodeRef->next;
        }

        // sort vector using std::sort()
        std::sort(vect.begin(), vect.end());

        // debug console
        for (int i = 0; i < vect.size(); i++)
        {
            std::cout << vect[i];
        }

        // create linked list of vector
        ListNode *finalListHeadPtr = NULL;
        for (int i = 0; i < vect.size(); i++)
        {
            ListNode *finalList = new ListNode;
            if (finalListHeadPtr == NULL)
            {
                finalListHeadPtr = finalList;
            }

            else
            {
                ListNode *tempPtr = finalListHeadPtr;
                while ((tempPtr->next) != NULL)
                {
                    tempPtr = tempPtr->next;
                }
                tempPtr->next = finalList;
            }
            finalList->val = vect[i];
            finalList->next = NULL;
        }

        // return created list pointer
        return finalListHeadPtr;
    }
};