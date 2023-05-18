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












https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbnBPMVVHR1JZN01oQ1o3UWUxT0VuVVd2LTNaQXxBQ3Jtc0ttSGFReldXOWJEamR3UnFOQlhoNU5NM3JGeldHNjdTc2hwTzB6VF9kc1N2ZDFUYkFuMGp0czlVZ1h4T2sxV2pzcEJ2OE5lT2xkZEp4S3lzTjF0aEowakh1bW5KNTJoOTkxNFU4Ylg3ck1FQXd6aGVBMA&q=https%3A%2F%2Fbit.ly%2F3rfFdfV&v=ogmBt6f9hw8
