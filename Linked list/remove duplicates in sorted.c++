Node * uniqueSortedList(Node * head) {
    // Write your code here.

if(head==NULL)
{
    return NULL;
}

Node* curr = head;
while(curr->next!=NULL)
{
    if(curr->data==curr->next->data)
    {
        
        Node* next_next= curr->next->next;
        Node* todelete = curr->next;
        delete(todelete);
        curr->next = next_next;
    }
    else{
        curr = curr->next;
    }
}
return head;

}
