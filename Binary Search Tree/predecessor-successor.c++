pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // find key
    BinaryTreeNode<int>* temp = root;
    int pre = -1;
    int suc = -1;
    while(temp->data != key)
    {

        if(temp->data > key)
        {
            suc = temp->data;
            temp = temp->left;
        } else {
          pre = temp->data;
          temp = temp->right;
        }
    }
      BinaryTreeNode<int>* leftTree = temp->left;
      while(leftTree!=NULL)
      {
          pre = leftTree->data;
          leftTree=leftTree->right;
      }

      BinaryTreeNode<int>* rightTree = temp->right;
      while (rightTree != NULL) {
        suc = rightTree->data;
        rightTree = rightTree->left;
      }
      pair<int,int> ans  = make_pair(pre,suc);
      return ans;
}











https://www.codingninjas.com/codestudio/problems/_893049?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1
