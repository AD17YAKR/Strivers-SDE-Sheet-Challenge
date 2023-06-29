/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *removeKthNode(Node *head, int k)
{
    Node *copy = new Node();

    copy->next = head;
    Node *slow = copy;
    Node *fast = copy;

    for (int i = 0; i < k; i++)
    {
        fast = fast->next;
    }
    while (fast->next != nullptr)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return copy->next;
}
