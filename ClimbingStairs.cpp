// for all problems 1)try to represent the problem interms of index 2)do all possible stuffs on that index according to problem stattements 3)sum of all stuffs->count all ways, min of all stuffs->find min or max
// convert all the problems into recursion,then convert into dynamic programming
// Q>u have been given a no of staires,initially u r at the 0th stair, and u need to reach nth stair.each time u can either climb one step or two steps,u r supposed to return the no of distinct ways in which u can climb from 0th step to nth step
// 1d recurence relation

#include <bits/stdc++.h>

using namespace std;


int main() {

  int n=2;
  
  int prev2 = 1;
  int prev = 1;
  
  for(int i=2; i<=n; i++){
      int cur_i = prev2+ prev;
      prev2 = prev;
      prev= cur_i;
  }
  cout<<prev;
  return 0;
}
// sc=o(1)