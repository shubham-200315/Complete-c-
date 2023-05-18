node* findMid(node* head)
{
    node* slow = head;
    node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL )
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node* merge(node* left, node* right)
{
    if(left== NULL)
        return right;
    if(right == NULL)
        return left;

    node* ans = new node(-1);
    node* temp = ans;

    while(left!=NULL && right!=NULL)
    {
        if(left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
             temp->next = right;
            temp = right;
            right = right->next;
        }
    } 
    while(left!=NULL)
    {
      temp->next = left;
            temp = left;
            left = left->next;
    }
    while(right!=NULL)
    {
        temp->next = right;
            temp = right;
            right = right->next;
    }

    ans = ans->next;
    return ans;
}


node* mergeSort(node *head) {
    // Write your code here.
    if(head==NULL || head->next == NULL)
    {
        return head;
    }
    node* mid = findMid(head);
    
    node* left = head;
    node* right = mid->next;
    mid->next = NULL;
    
     left = mergeSort(left);
     right = mergeSort(right);

     node* result = merge(left, right);
     return result;
}












https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa3dmeDNxS0g5X3Q0WDNLYnFGZnBuRjJYdWtoQXxBQ3Jtc0trY0tBaXRrcjJkcVozamg2THVJWFZweU9COWFPYmNmbUVXZG1YRjBTMEktbWdoQVhac0pkSWJYekJKUVdwNlpBTUg1N19jbEw0VTJtZkl6Y2NXUGV3ZndwX2NacUJZYzNuQ2pBU0gzQzRsblNLYTI5RQ&q=https%3A%2F%2Fbit.ly%2F3GsXWsz&v=rM5EEA_rbNY
