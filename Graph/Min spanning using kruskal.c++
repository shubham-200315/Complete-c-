#include<bits/stdc++.h>
bool cmp(vector<int> &a, vector<int> &b)
{
  return a[2]<b[2];
}
//yeh saare node ko khud ka parent banayega 
// or rank ko 0 se initialize krwa dega
void makeSet(vector<int>& parent, vector<int> &rank, int n)
{
  for(int i=0; i<n; i++){
    parent[i] = i;
    rank[i]=0;

  }
}

int findParent(vector<int> &parent, int node)
{
  if (parent[node] == node) {
  
  return node;
}
// yeh jaakr sabse pehle parent se jud jayega also call path compression
return parent[node] =  findParent(parent, parent[node]);
}



void unionSet(int u, int v, vector<int> &parent, vector<int> &rank)
{
  // yeh parent check krega nodes ke
  u = findParent(parent, u);
  v = findParent(parent, v);
  // phir uss node ki rank dekh kr aayega
  if(rank[u]<rank[v])
  {
    parent[u] =v;

  }
  else if(rank[v]<rank[u]){
    parent[v] =u;
  }
  //jab dono rank 0 ho ya same
  else{
    parent[v] = u;
    rank[u]++;
  }
}

int minimumSpanningTree(vector<vector<int>>& edges, int n)
{

  // weight ke acc isko sort lr liya
  sort(edges.begin(), edges.end(), cmp);
  vector<int> parent(n);
  vector<int> rank(n);
  makeSet(parent, rank,n);
  int minWeight = 0;
  // har pair ke parents ko nikal kr check kiya ki same parent hai ya diff
  for(int i=0; i<edges.size(); i++)
  {
    int u = findParent(parent, edges[i][0]);
    int v= findParent(parent, edges[i][1]);
    int wt = edges[i][2];
    //agr diff hai to add kr do or weight nikal lo
    if(u!= v)
    { 
     minWeight +=wt;
      unionSet(u, v, parent, rank);
       
    }
  }
  return minWeight;
}






https://www.codingninjas.com/codestudio/problems/minimum-spanning-tree_631769?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar




