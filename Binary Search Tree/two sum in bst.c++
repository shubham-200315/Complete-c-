void inOrder(BinaryTreeNode<int>* root, vector<int> &inVal)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left, inVal);
    inVal.push_back(root->data);
    inOrder(root->right, inVal);

}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	vector<int> inVal;
    inOrder(root,inVal);
    int i =0;
    int j= inVal.size()-1;
    while(i<j)
    {
        int sum = inVal[i]+ inVal[j];
        if(sum>target)
        {
            j--;
        }
        else if(sum<target)
        {
            i++;
        }
        else{
            return true;
        }
    }
    return false;
}










https://www.codingninjas.com/codestudio/problems/two-sum-in-a-bst_1062631?leftPanelTab=1
