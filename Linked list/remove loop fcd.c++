Node* floyd(Node*head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node* slow = head;
    Node*fast = head;
    while(slow!=NULL&& fast!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL)
        {
            fast = fast-> next;

        }
        slow = slow->next;
        if(slow==fast)
        {
            return slow;
        }
    }
    return NULL;
}

Node* starting(Node*head)
{
   if(head==NULL)
   {
       return NULL;
   }

   Node* intersecting= floyd(head);
   if(intersecting == NULL)
   {
       return NULL;
   }
   Node*slow= head;
   while(slow!=intersecting)
   {
       slow = slow->next;
       intersecting = intersecting->next;
   }
   return slow;
}
Node *removeLoop(Node *head)
{
    // Write your code here.
 if(head==NULL)
    {
        return NULL;
    }
    Node*startingElement= starting(head);
    if(startingElement==NULL)
    {
        return head;
    }
    Node* temp = startingElement;
    while(temp->next!= startingElement)
    {
        temp = temp->next;
    }
    temp->next= NULL;
     return head;
}





https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbGVBLUx5VW1QSER0bnZuQ3hYWE5EdUIxWHdNUXxBQ3Jtc0tsQVQxbVlCWmRicHQ4VElvYmtEQXhxaDRLR2ZMLTV2S3hPRmFqSjFTQzZRYjJfc0hwM09VMkJrX1FIZnp3OVgtdTQtbm1UdVlVZllOeERrLUdGa1VqTDBKU0VLVGtoWF9ZV1dwcEV6UlF6S3B1YW9lSQ&q=https%3A%2F%2Fbit.ly%2F3rSdTDo&v=VxOFflTXlXo
