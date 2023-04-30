 private:
    void insertAtTail(Node* &head , Node* &tail, int d)
    {
        Node* newNode = new Node(d);
        if(head==NULL)
        {
             head = newNode;
             tail= newNode;
           
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        
        // Step1: create a clone list
        
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
         
        Node*temp = head;
        while(temp!=NULL)
        {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        
        // Step2: create a addition with original list
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode!=NULL && cloneNode!= NULL)
        {
            Node*next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;
            
            next = cloneNode->next;
            cloneNode->next= originalNode;
            cloneNode = next;
            
        }
        
        // Step3: random pointer copy 
        
        temp = head;
        while(temp!=NULL)
        {
            if(temp->next!=NULL)
            {
                temp->next->arb = temp->arb 
                ? temp -> arb->next : temp->arb;
            }
            temp = temp->next->next;
        }
        
        
        // Step4: revert the changes
        
        originalNode = head;
        cloneNode = cloneHead;
        while(originalNode!=NULL&& cloneNode!= NULL)
        {
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            if(originalNode!=NULL)
            {
            cloneNode->next = originalNode->next;
                
            }
            cloneNode = cloneNode->next;
        }
        
        // Step5: return ans
        
        return cloneHead;
        
        //Write your code here
    }
