#include<bits/stdc++.h>
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	unordered_map<int , list<int>> adj;
   for(int i =0; i<edges.size(); i++ )
   {
     int u = edges[i].first;
     int v = edges[i].second;
     
     adj[u].push_back(v);
	 adj[v].push_back(u);
   }

   //do bfs
   unordered_map<int, bool> visited;
   unordered_map<int, int> parent;
   queue<int> q;
   q.push(s);
   parent[s]= -1;
   visited[s]=true;
   while(!q.empty())
   {
	   int front = q.front();
	   q.pop();
	   for(auto i: adj[front])
	   {
             if (!visited[i]) {
               visited[i] = true;
               parent[i] = front;
               q.push(i);
             }
        }
   }

   //prepare shortest path

   vector<int> ans;
   int currentNode =t;
   ans.push_back(t);
   while(currentNode!=s)
   {
	   currentNode= parent[currentNode];
	   ans.push_back(currentNode);
   }
   reverse(ans.begin(), ans.end());
   return ans;
	
}







https://www.codingninjas.com/codestudio/problems/shortest-path-in-an-unweighted-graph_981297?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar



