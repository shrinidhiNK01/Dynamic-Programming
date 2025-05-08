#include<bits/stdc++.h>
using namespace std;
int fib(int a){
    if(a==0||a==1){
        return a;
    }
    else{
        return fib(a-2)+fib(a-1);
    }
}
int main(){
    int a;
    cout<<"Enter number:"<<" ";
    cin>>a;
    for(int i=0;i<a;i++){
        cout<<fib(i)<<" ";
    }
}