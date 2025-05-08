// Tabulation:-Bottom(base case) up(main problem ) DPapproach:- TC and SC and SC Optimization
// Memoization:-top(main problem) to down(base cases) DP approach:-TC and SC
// memoization(Every number is equal to the sum of previous 2 numbers):-we tend to store results of sub problems ,we overlap sub problems to other,means in fib(4) recursion
// we have fib(3) and fib(2)---->fib(3)---->fib(2)+fib(1), here once if we find the result value of fib(3),we will not go into recursion tree again, for wherever fib(3) comes, so once the answer of fib(3) found, the answer is substituted for all other fib(3) cases in the recursion tree, it is stored in some map/table , to avoid more repeated recursion,
// step1:-Declare a DP array:-dp[n+1]==> size of sub problems
// step2:-checking if it is previously solved or not:-if(dp[n!=-1]) return dp[n];
// step3:-calling sub problems returns:-dp[n]=fib(n-1)+fib(n-2)
// when to use DynamicProgramming:-1)count the total no of ways 2)find min /max 3)try all possible ways 4)recursive problems
#include<bits/stdc++.h>
using namespace std;
int fib(int n,vector<int> &dp){
    
    if(n==0||n==1){return n;}
    if(dp[n]!=-1){return dp[n];}
    else{
       return dp[n]=fib(n-1,dp)+fib(n-2,dp);
    }
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    vector<int> dp(n+1, -1); //array initialized to -1
    for (int i=0;i<n;i++){
        cout<<fib(i,dp);
    }
}
// Time Complexity:-O(n)
// Space Complexity:-O(n)+O(n):-stack space+array