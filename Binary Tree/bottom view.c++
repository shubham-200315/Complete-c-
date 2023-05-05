vector <int> bottomView(Node *root) {
         vector<int> ans;
        if(root==NULL)
        {
            return ans;
        }
        //map to store horizontal distance from root node, root data
        map<int, int> topNode;
        // queue to store node andthe distance from root node
        queue<pair<Node*, int>>q;
        // first root node is pushed and initialized distance with zero being starting index
        q.push(make_pair(root,0));
        while(!q.empty())
        {
            //single block to store only one element with both node, distance
            pair<Node*, int> temp = q.front();
            q.pop();
            // to take out node from the block
            Node* frontNode = temp.first;
            //to take out the horizontal distance of the node
            int hd = temp.second;
            // it tries to find the entry corresponding to hd value and
            //if it is not present then ans is equal to top.end()
            
                topNode[hd]=frontNode->data;
            if(frontNode->left)
                q.push(make_pair(frontNode->left, hd-1));
            if(frontNode->right)
                q.push(make_pair(frontNode->right,hd+1));
        }
        
        for(auto i:topNode)
        {
            ans.push_back(i.second);
        }
        
      return ans;
    }
