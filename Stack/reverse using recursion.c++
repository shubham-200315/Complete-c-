void insertAtBottom(stack<int>&inputStack,  int element)
{
   if(inputStack.empty())
   {

    inputStack.push(element);
    return;
   }
   int num  = inputStack.top();
   inputStack.pop();

   insertAtBottom(inputStack, element);
   inputStack.push(num);
}



void reverseStack(stack<int> &stack) {
    // Write your code here

    if(stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();
    // call 

    reverseStack(stack);
    insertAtBottom(stack, num);
}
