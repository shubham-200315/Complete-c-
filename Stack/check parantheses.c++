





bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char>s ;
    int len = expression.length()-1;
    for(int i=0; i<expression.length(); i++)
    {
        char ch = expression[i];

        // if opening bracket , stack push kr do
        if (ch == '(' || ch == '[' || ch == '{') {
          s.push(ch);
        }
        else{
          if (!s.empty()) {
            char top = s.top();
            if ((ch == ')' && top == '(') || (ch == ']' && top == '[') ||
                (ch == '}' && top == '{')) {
              s.pop();
            } else {
              return false;
            }
          } else {
            return false;
          }
        }
        // if cosing bracket, stacktop check kro null to nhi ,
        // phir pop kr do

    }
    if(s.empty())
    {
        return true;
    }
    else{
        return false;
    }
}
