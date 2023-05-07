LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==NULL || head-> next == NULL)
    {
        return head;
    }
    LinkedListNode<int>*prev = NULL;
    LinkedListNode<int>*curr= head;
    LinkedListNode<int>*forward = NULL;
    while(curr!= NULL)
    {
        forward = curr->next;
        curr->next= prev;
        prev = curr;
       curr= forward;

    }
    return prev;
}










https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan
