/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k)
{
    if (head == NULL || head->next == NULL || k == 0)
        return head;

    Node *slow = head, *fast = head;
    int len = 0;
    for (int i = 0; i < k; i++)
    {
        if (fast->next == NULL)
            fast = head;
        else
            fast = fast->next;
    }
    if (fast == head)
        return head;
    while (fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    Node *temp = slow->next;

    fast->next = head;
    slow->next = NULL;
    return temp;
}