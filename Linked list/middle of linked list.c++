int getLength(Node*head)
{
    int len =0; 
    while(head!=NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}



Node *findMiddle(Node *head) {

int len = getLength(head);
int ans = ( len/2);
Node*temp =head;
int cnt =0;
while(cnt<ans)
{
temp = temp->next;
cnt++;
}

return temp;


}




















https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan
