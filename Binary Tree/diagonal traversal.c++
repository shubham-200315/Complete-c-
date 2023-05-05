void solve(Node* root, int level, map<int,vector<int>> &value)
{
    if(root==NULL)
    {
        return;
    }
    value[level].push_back(root->data);
    
    solve(root->left, level+1 , value);
    
    solve(root->right, level, value);
}

vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>ans;
   if(root==NULL)
   {
       return ans;
   }
   map<int, vector<int>> value;
   solve(root, 0, value);
   
   for(auto i: value)
       for(auto j:i.second)
           ans.push_back(j);
       return ans;
   
}
