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

TreeNode<int>* intoBst(int s, int e, vector<int> &inn)
{
    if(s>e)
    return NULL;

    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(inn[mid]);
    root->left = intoBst(s,mid-1, inn);
    root->right = intoBst(mid+1, e, inn);
 return root;
}
TreeNode<int>* balancedBst(TreeNode<int>* root) {
vector<int> inVal;
    inOrder(root,inVal);
    return intoBst(0, inVal.size()-1, inVal);
}







https://www.codingninjas.com/codestudio/problems/normal-bst-to-balanced-bst_920472?leftPanelTab=1
