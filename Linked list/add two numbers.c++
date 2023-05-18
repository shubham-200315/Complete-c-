 private:
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
    void insertAtTail(struct Node* &head, struct Node* &tail, int data)
    {
        Node*temp = new Node(data);
        if(head==NULL)
        {
            head = temp;
            tail= temp;
            return;
        }
        else{
            tail->next = temp;
            tail= temp;
        }
    }
    struct Node* add(struct Node* first, struct Node* second)
    {
        int carry = 0;
        
        Node*ansHead= NULL;
        Node*ansTail= NULL;
        
        while(first!=NULL&&second!=NULL)
        {
            int sum = carry+ first->data + second->data;
            int digit = sum%10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            first = first->next;
            second = second->next;
        }
         while(first!=NULL)
        {
            int sum = carry+ first->data;
            int digit = sum%10;
            
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
             first = first->next;
        }
         while(second!=NULL)
        {
            int sum = carry+ second->data;
            int digit = sum%10;
           
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
                        second = second->next;
        }
        while(carry!=0)
        {
             int sum = carry;
            int digit = sum%10;
           
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
        }
        return ansHead;
        
    }
    
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first =reverse(first);
        second = reverse(second);
        Node* ans = add(first, second);
        return reverse(ans);
        
    }






https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa1kwa0ZYV1lSQ3ZaaDlPQ3kxR0ZhY3M4QVhQZ3xBQ3Jtc0trUGVXUVdSNkNCNTdqZWNZLS1MTjFFSWxoUjFXUnc3NWZaMHZ4dzBPM2JkVWRlYmQxTEFuTUR0SWowMFZlUEY1d1dHeUptdGJsZC1qeWxUUGxUUTNxR1hjOG1wUExUZW0zZ3pZSk96SFBmU0tJUk5rTQ&q=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Fadd-two-numbers-represented-by-linked-lists%2F1&v=HiRlTPf9aCg
