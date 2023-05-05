 private:
   int findPos(int in[], int element, int s, int e)
    {
        for(int i = s; i<=e; i++)
        {
            if(in[i]==element)
                return i;
        }
        return -1;
    } 
    
    
   /* void findPos(int in[] , map<int,int> &nodeToIndex, int s, int e)
    {
        for(int i=s; i<e; i++)
        {
            nodeToIndex[in[i]] = i;
        }
    }
    
    */
    Node* solve(int in[],int pre[], int &pi, int s, int e, int n)
    {
        if(pi>=n || s>e )
        {
            return NULL;
        }
        int element = pre[pi++];
        Node* root = new Node(element);
        //  int pos = nodeToIndex[element];
        int pos = findPos(in, element,s,e);
        
        root->left = solve(in, pre, pi, s, pos-1, n);
        root->right = solve(in, pre, pi, pos+1,e, n);
        return root;
    }
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
       int pi = 0;
    //   map<int,int> nodeToIndex;
    //   findPos(in, nodeToIndex, 0, n-1);
      Node* ans=  solve(in, pre, pi, 0, n-1,n);
        return ans;
    }
    
    
    https://practice.geeksforgeeks.org/problems/construct-tree-1/1
