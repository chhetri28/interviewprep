//Minimum Size Subarray Sum
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> nums,int k){
  int i=0,j=0;
  int mini=INT_MAX;
  int sum=0;
  while(j<nums.size()){
    if(sum<k) sum+=nums[j];
    j++;
    while(sum>=k){
      mini=min(mini,j-i);
      sum-=nums[i];
      i++;
    }
  }
  int res=mini==INT_MAX ?0 :mini; 
  cout<<res;
}
int main(){
  vector<int>nums={2,3,1,2,4,3};
  int k=7;
  solve(nums,k);
}
