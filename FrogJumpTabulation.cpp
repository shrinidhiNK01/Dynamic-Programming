#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> height{30,10,60,10,60,50};
    int n=height.size();
    vector<int> dp(n,-1);
    dp[0]=0;
    for(int ind=1;ind<n;ind++){
        int jumptwo=INT_MAX;
        int jumpone=dp[ind-1]+abs(height[ind]-height[ind-1]);
        if (ind>1){
            jumptwo=dp[ind-2]+abs(height[ind]-height[ind-2]);
        }
        dp[ind]=min(jumpone,jumptwo);

    }
    cout<<dp[n-1];


}
// Space complexity:-O(N)