Node* kReverse(Node* head, int k) {
    // Write your code here.
 if(head == NULL)
 {
     return NULL;

 }
 Node*next = NULL;
 Node* curr=head;
 Node* prev = NULL;
 int count =0;
 while(curr!=NULL&&count<k)
{
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
}
if(next!=NULL)
{
    head->next = kReverse(next,k);
}
return prev; 

}






https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbkcwcF9uTTZHOUtfV2tWMEZNOTJxaTI3QXl3UXxBQ3Jtc0tsZHR2akVqZEpkelNBMGlXQnA5aXhIS2E4TEpkLW9MOEQyb2NkZXY0OE11amU0WTd2WEpfRE5uOU1xeWRqa2V3WWJKclBiU1ZSX1ZYUVY2VU9XdzVtUUNUdVQzRWhYVENLYTZPNk5mbnVXWERfV3N2Zw&q=https%3A%2F%2Fbit.ly%2F3r1rCIP&v=fi2vh0nQLi0
