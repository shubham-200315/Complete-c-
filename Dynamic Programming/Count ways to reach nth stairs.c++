#include <bits/stdc++.h> 
#define mod 1000000007
int countDistinctWays(int nStairs) {
    int n=nStairs;
    int prev1=1;
    int prev2=1;
    int curr;
    if(n==1 || n==0)
        return 1;
    for(int i=2;i<=n;i++){
        curr=(prev1+prev2)%mod;
        prev1=prev2;
        prev2=curr;
    }
    return curr%mod;
}






https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?leftPanelTab=3&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
