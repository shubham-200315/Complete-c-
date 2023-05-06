void inOrder(TreeNode<int>* root, vector<int> &inVal)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left, inVal);
    inVal.push_back(root->data);
    inOrder(root->right, inVal);

}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    
    vector<int> inVal;
    inOrder(root,inVal);
    int n = inVal.size();
    
    TreeNode<int>* newRoot = new TreeNode<int>(inVal[0]);

    TreeNode<int>* curr = newRoot;
     for(int i=1; i<n; i++)
     {
         TreeNode<int>* temp = new TreeNode<int>(inVal[i]);
         curr->left = NULL;
         curr->right = temp;
         curr = temp;
     }
      
      curr->left = NULL;
      curr->right = NULL;

      return newRoot;
}









https://www.codingninjas.com/codestudio/problems/flatten-bst-to-a-sorted-list_1169459?leftPanelTab=1
