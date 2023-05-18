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













https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbHJFZDJvLUhjdDR2R1Zob0FKTEJoSXVDQ29VUXxBQ3Jtc0ttUkJCSTFTZFBUM3kzcE1pekdGb1FmSkR1SXFqRnU0aWJZN3VCdC1qck5vLWdkU0hQd2pxYWVCWDM4YXFzanNhdzNRMExFeWlUV2hZS0tNVDZFWmhSOXg2bXlybk10NTVOYzlXRkVmV2RyY0VVWXY1NA&q=https%3A%2F%2Fbit.ly%2F3s3fAOu&v=ogmBt6f9hw8
