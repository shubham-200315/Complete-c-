int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> pq;
        for(int i=0; i<k; i++)
        {
            pq.push(arr[i]);
        }
        
        //from the value of k it is decided that the smallest most elements are in the heap
        for(int i=k; i<=r; i++)
        {
            if(arr[i]<pq.top())
            {
               pq.pop();
               pq.push(arr[i]);
            }
        }
        int ans = pq.top();
        return ans;
    }
    
    
    
    
    
    
    
    
    
    
    https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
