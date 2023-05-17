#include <bits/stdc++.h> 
long long int solve(vector<int> &nums){

    int n = nums.size();
    long long int prv2 = 0;
    long long int prv1 = nums[0];
    for(int i=1; i<n; i++){
        long long int incl = prv2 + nums[i];
        long long int excl = prv1;

        long long int ans = max(incl,excl);

        prv2 = prv1;
        prv1 = ans;
    }
    return prv1;
}
long long int houseRobber(vector<int>& valueInHouse)
{
    int n = valueInHouse.size();

    if(n == 1)
    return valueInHouse[0];

    vector<int> first, second;
    for(int i=0; i<n; i++){
        if(i != n-1){
            first.push_back(valueInHouse[i]);
        }
        if(i != 0){
            second.push_back(valueInHouse[i]);
        }
    }
    return max(solve(first), solve(second));

}









https://www.codingninjas.com/codestudio/problems/house-robber_839733?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar


