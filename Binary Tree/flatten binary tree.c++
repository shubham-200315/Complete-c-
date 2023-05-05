 void flatten(Node *root)
    {
        Node* curr = root;
        while(curr!= NULL)
        {
            if(curr->left)
            {
                Node* pred = curr->left;
                while(pred->right)
                {
                    pred = pred->right;
                }
                    pred->right = curr->right;
                    curr->right = curr->left;
                    curr->left = NULL;
            }
            curr = curr->right;
        }
        
        // curr= root;
        // while(curr!=NULL)
        // {
        //     curr->left = NULL;
        //     curr= curr->right;
        // }
    }
    
    
    
    
    
    
    
    
    https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1
