#include <bits/stdc++.h>
using namespace std;

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
    ListNode *middleNode(ListNode *head)
    {
        struct ListNode *turtle = head;
        struct ListNode *hare = head;

        while (hare->next != NULL)
        {
            hare = hare->next;
            if (hare->next != NULL)
            {
                hare = hare->next;
            }
            turtle = turtle->next;
        }

        return turtle;
    }
};

int main()
{

    return 0;
}