void populate(Node* &tail, Node* curr)
{
    tail->next= curr;
    tail = curr;
}



Node* sortList(Node *head)
{
    // Write your code here.

 Node* zeroHead= new Node(-1);
 Node* zeroTail = zeroHead;
 Node* oneHead = new Node(-1);
  Node* oneTail = oneHead;
 Node* twoHead= new Node(-1);
  Node* twoTail = twoHead;   

  Node * curr = head;
  while(curr!= NULL)
  {
      int value = curr->data;
      if(value==0)
      {
          populate(zeroTail, curr);
      }
       else if(value==1)
      {
          populate(oneTail, curr);
      }
       else if(value==2)
      {
          populate(twoTail, curr);
      }
      curr = curr->next;

  }          
    // merge 
    if(oneHead->next!=NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;
    
    head = zeroHead->next;
    delete(zeroHead);
    delete (oneHead);
    delete (twoHead);
    return head;
}
