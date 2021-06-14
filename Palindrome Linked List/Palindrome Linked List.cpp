/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *ptr = head;
        vector<int> rec;
        while (ptr != nullptr)
        {
            rec.push_back(ptr->val);
            ptr = ptr->next;
        }
        for (int i = 0; i < rec.size() / 2; i++)
        {
            if (rec[i] != rec[rec.size() - 1 - i])
                return false;
        }
        return true;
    }
};