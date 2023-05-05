int findPos(int in[], int element, int s, int e)
    {
        for(int i = s; i<=e; i++)
        {
            if(in[i]==element)
                return i;
        }
        return -1;
    } 
    
    
    Node* solve(int in[],int post[], int &pi, int s, int e, int n)
    {
        if(pi<0 || s>e )
        {
            return NULL;
        }
        int element = post[pi--];
        Node* root = new Node(element);
        //  int pos = nodeToIndex[element];
        int pos = findPos(in, element,s,e);
        
        root->right = solve(in, post, pi, pos+1,e, n);
        root->left = solve(in, post, pi, s, pos-1, n);
        return root;
    }
    
    
    
    
Node *buildTree(int in[], int post[], int n) {
    // Your code here
     int pi = n-1;
    //   map<int,int> nodeToIndex;
    //   findPos(in, nodeToIndex, 0, n-1);
      Node* ans=  solve(in, post, pi, 0, n-1,n);
        return ans;
}




https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1
