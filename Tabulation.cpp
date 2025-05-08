// base cases to main case
// TC:-O(N)
// SC:-O(1)==>OPTIMIZED, no extra space
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prev2=0;
    int prev=1;
    for(int i=2;i<n;i++){
        int curi=prev+prev2;
        prev2=prev;
        prev=curi;
    }
    for(int j=0;j<n;j++){
        
    }
    cout<<prev;
}