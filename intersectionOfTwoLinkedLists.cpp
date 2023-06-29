/****************************************************************

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

*****************************************************************/
Node *findIntersection(Node *firstHead, Node *secondHead)
{
    Node *slow = firstHead, *fast = secondHead;

    while (slow != fast)
    {
        if (slow == nullptr)
            slow = firstHead;
        else
            slow = slow->next;

        if (fast == nullptr)
            fast = secondHead;
        else
            fast = fast->next;
    }

    return slow;
}
