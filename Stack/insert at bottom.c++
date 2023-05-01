void solve(stack<int>&inputStack, int size,  int element)
{
   if(inputStack.empty())
   {

    inputStack.push(element);
    return;
   }
   int num  = inputStack.top();
   inputStack.pop();

   solve(inputStack,size, element);
   inputStack.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    int size = myStack.size();
    solve(myStack,size, x);
    return myStack;
}
