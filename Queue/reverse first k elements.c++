queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> s;
    for(int i =0; i<k; i++)
    {
        int element = q.front();
        q.pop();
        s.push(element);
        
    }
    
    while(!s.empty())
    {
        int data = s.top();
        s.pop();
        q.push(data);
    }
    
    int t = q.size()-k;
    while(t--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
