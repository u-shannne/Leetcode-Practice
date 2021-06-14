#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    vector<ListNode *> v_Node;
    ListNode *ptr = head;
    while (ptr != nullptr)
    {
        v_Node.push_back(ptr);
        ptr = ptr->next;
    }
    int len = v_Node.size();
    if (len - n == 0)
    {
        head = head->next;
    }
    else if (n == 1)
    {
        v_Node[len - 2]->next = nullptr;
    }
    else
    {
        v_Node[len - n - 1]->next = v_Node[len - n - 1]->next->next;
    }
    return head;
}
int main()
{

    return 0;
}