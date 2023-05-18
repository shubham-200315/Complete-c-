private:
    Node* getMid(Node*head)
    {
        Node*slow = head;
        Node*fast = head->next;
        
        while(fast!=NULL&&fast->next!=NULL)
        {
            fast = fast->next->next;
            slow =  slow->next;
            
        }
        return slow;
    }
    
    Node* reverse(Node* head)
    {
        Node* curr = head ;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr!= NULL)
        {
            next = curr->next;
            curr ->next = prev;
            prev = curr;
            curr= next;
        }
        return prev;
    }
    
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        
        if(head->next == NULL)
        {
          return true;
        }
          
          Node* middle = getMid(head);
           
           Node*temp = middle->next;
           middle->next = reverse(temp);

          Node* head1= head;
          Node* head2 = middle->next;
          while(head2!=NULL)
          {
              
          
          if(head1->data!= head2->data)
          {
              return false;
          }
          head1 = head1->next;
          head2 = head2->next;
    }
    
    temp = middle->next;
   middle->next = reverse(temp);
   return true;
    }






https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbUhreXZwSVZmV1R2Sy1WOElCTHVvNUhib01hUXxBQ3Jtc0tsYkwxQURzSzBVT0Z4dmdTVlFHVno4bHFnbmEwalQ2bFczemRNTTBKSmgwbVpteFBVLWo3eEJESHZ1NUZkSzdPU1lDcm5pOWtYLVRzLVNnYlJHdEJZeFRLb2w1MHlWbFVBMUZlQmxYYWVhRW5WTVctdw&q=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Fcheck-if-linked-list-is-pallindrome%2F1%2F&v=aD7mBVnKFEU
