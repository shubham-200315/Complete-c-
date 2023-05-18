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






https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbjBxRmZUM3dGYzVCaVMtRVV3eUR0QzFlWVJYUXxBQ3Jtc0trNk5QdHZjelRqMGpEOGJiaV9fVlpZeTVoT3NZTFZqaXg5NWhGaDFMRlA5am83blBoOWVmLTU3eWh6Tk9QeWtkVHBhSW41Z2ZVaER0YXZud25pN2FuVDdJRVNVdzREM1BoVkRUZ0NHT08xdENGZHBQUQ&q=https%3A%2F%2Fbit.ly%2F3rjMQC5&v=7pgs-wT5d4c
