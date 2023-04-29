Node *removeDuplicates(Node *head)
{
   unordered_map<int,bool>visited;

   Node*temp=head;  

   Node*prev=head;  

   while(temp!=NULL){  

       if(visited[temp->data]==true){  

           prev->next=temp->next;  

       }  

       else{  

           prev=temp;  

           visited[temp->data]=true;  

       }  

       temp=temp->next;  

   }  
     return head;  // Write your code here
}
