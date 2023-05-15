#include<bits/stdc++.h>
using namespace std;

// int fib(int n , vector<int> &dp)
// {
//         if(n<=1)
//         {
//                 return n;
//         }
//         if(dp[n]!=-1)
//         {
//                 return dp[n];
//         }
//         dp[n] = fib(n-1, dp) + fib(n-2, dp);
//         return dp[n];
// }




int main()
{
        int n;
        cin>>n;
//         vector<int> dp(n+1, -1);
//        cout<< fib(n,dp)<<endl;
//        return 0;

int prev1=0;
int prev2 = 1;
if(n==0)
{
        return prev1;
}
for(int i=2; i<=n; i++)
{
    int curr = prev1 + prev2;
    prev1 = prev2;
    prev2 = curr;    
}
cout<<prev2<<endl;
return 0;
}






https://www.codingninjas.com/codestudio/problems/nth-fibonacci-number_74156?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar








