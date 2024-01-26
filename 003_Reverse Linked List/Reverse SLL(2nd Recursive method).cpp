LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // recursion part
    LinkedListNode<int> *newhead = reverseLinkedList(head->next);

    // Fixing the 1st head
    head->next->next = head;
    head->next = NULL;

    return newhead;
}
