#include <bits/stdc++.h> 
#define MOD 1000000007

int add(int a, int b){
    return (a%MOD + b%MOD)%MOD;
}
int mul(int a, int b){
    return ((a%MOD)* 1LL * (b%MOD))%MOD;
}
int solve(int n, int k){
    if(n == 1)
        return k;
    if(n == 2)
        return add(k, mul(k, k-1));

    int ans = add(mul(solve(n-1, k), k-1), mul(solve(n-2, k),k-1));
    return ans;
}

int solveMem(int n, int k, vector<int> &dp){
    if(n == 1)
        return k;
    if(n == 2)
        return add(k, mul(k, k-1));

    if(dp[n] != -1)
        return dp[n];

    dp[n] = add(mul(solveMem(n-1, k, dp), k-1), mul(solveMem(n-2, k, dp),k-1));
    return dp[n];
}
int solveTab(int n, int k){
    vector<int> dp(n+1, 0);
    dp[1] = k;
    dp[2] = add(k, mul(k, k-1));

    for(int i=3; i<=n; i++){
        dp[i] = add(mul(dp[i-1], k-1), mul(dp[i-2], k-1));
    }
    return dp[n];
}
int solveSO(int n, int k){
    int prv2 = k;
    int prv1 = add(k, mul(k, k-1));

    for(int i=3; i<=n; i++){
        int ans = add(mul(prv1, k-1), mul(prv2, k-1));
        prv2 = prv1;
        prv1 = ans;
    }
    return prv1;
}
int numberOfWays(int n, int k) {

    //recursion method
    //return solve(n, k);

    //recursion + Memoization
    // vector<int> dp(n+1, -1);
    // return solve2(n, k, dp);

    //Tabulation
    //return solve3(n, k);

    //space optimal solution
    return solveSO(n,k);
}






https://www.codingninjas.com/codestudio/problems/ninja-and-the-fence_3210208?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar








