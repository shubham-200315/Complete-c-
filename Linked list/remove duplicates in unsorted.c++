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





https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbWZYd2RycDA1SFlITWpRNmh6cmJuS25DR3lwZ3xBQ3Jtc0trcjNqVFUxXzhNazIxVjFteFdCWU04clQ5ME9rblFFYm1RTmgweU5DTlNNS2tCdDZVazBKYmltMmdDSHdpZUwtSlhESmo5VFRrQ2hPZldJSmQyeTJWVUxQR3N2SHRrV3VaeHZFMGtUTW5SRXF4LVlpZw&q=https%3A%2F%2Fbit.ly%2F3uaGRRU&v=7pgs-wT5d4c
