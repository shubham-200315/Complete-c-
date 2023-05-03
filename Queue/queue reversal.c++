queue<int> rev(queue<int> q)
{
    // add code here.
    //create a stack and push all the elements from the queue
    stack<int> s;
    while(!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }
    //empty the stack and push all the element back in the queue
    while(!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}
