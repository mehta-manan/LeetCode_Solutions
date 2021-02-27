#include <iostream>

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
        // if both list points to NULL, return a null pointer
        if (l1 == NULL && l2 == NULL)
            return l1;

        // if list 1 is NULL, return list 2
        else if (l1 == NULL)
            return l2;

        // if list 2 is NULL, return list 1
        else if (l2 == NULL)
            return l1;

        // temporary pointer to list 1
        auto temp1 = l1;
        // temporary pointer to list 2
        auto temp2 = l2;

        // head of merge list
        ListNode *head = NULL;

        // temporary pointer to merge list for traversal
        ListNode *final_temp = NULL;

        // while the pointers are not at the end of list
        while (temp1 != NULL && temp2 != NULL)
        {
            // create a new node
            auto new_list_node = new ListNode;

            // if head is null, set head
            if (head == NULL)
                head = new_list_node;

            // else connect lists
            else
                final_temp->next = new_list_node;

            // shift final_temp to last node
            final_temp = new_list_node;

            new_list_node->next = NULL;

            // compare lists value, and insert in final  list
            if ((temp1->val) > (temp2->val))
            {
                new_list_node->val = temp2->val;
                temp2 = (temp2->next);
            }
            else
            {
                new_list_node->val = temp1->val;
                temp1 = (temp1->next);
            }
        }

        // append rest of the elements, if any pointer reacges end of the respective list
        if (temp1 != NULL)
            final_temp->next = temp1;

        else
            final_temp->next = temp2;

        //return head;
        return head;
    }
};