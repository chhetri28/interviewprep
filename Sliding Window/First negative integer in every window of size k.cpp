/*

Given an array and a positive integer k, find the first negative integer for each window(contiguous subarray) of size k. If a window does not contain a negative integer, then print 0 for that window.

Examples:

Input : arr[] = {-8, 2, 3, -6, 10}, k = 2
Output : -8 0 -6 -6
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6

Input : arr[] = {12, -1, -7, 8, -15, 30, 16, 28} , k = 3
Output : -1 -1 -7 -15 -15 0
*/
#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int k,int n){
    vector<int>ans;
    int i=n-1,j=n-1;
    int neg=0,ind=n;
    while(i>=0){
        if(a[i]<0){
            neg=a[i];
            ind=i;
        }
        if(j-i+1 < k) i--;
        else if(j-i+1==k){
            if(ind>j) neg=0;
            ans.push_back(neg);
            i--;
            j--;
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int a[]={12, -1, -7, 8, -15, 30, 16, 28};
    int k=3;
    int n=8;
    solve(a,k,n);
}
