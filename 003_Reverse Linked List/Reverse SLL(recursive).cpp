#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void reverseLL(LinkedListNode<int> *&head, LinkedListNode<int> *curr, LinkedListNode<int> *prev)
{
    //base case
    if(curr == NULL){
        head= prev;
        return;
    }

    //recursion
    LinkedListNode<int> * forward= curr->next;
    reverseLL(head,forward,curr);
    curr->next=prev;

}


LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *curr = head;

    reverseLL(head, curr, prev);
    return head;
}
