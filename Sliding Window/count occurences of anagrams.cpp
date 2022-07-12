/*
Given a word pat and a text txt. Return the count of the occurences of anagrams of the word in the text.

Example 1:

Input:
txt = forxxorfxdofr
pat = for
Output: 3
Explanation: for, orf and ofr appears
in the txt, hence answer is 3.
*/

#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int k,int n){
  unordered_map<char, int >mp;
int ans=0;
for(auto &x:pat){
    mp[x]++;
}
int k=pat.size();
int count=mp.size();
int i=0,j=0;

while(j<txt.size()){
    //calculation
    if(mp.find(txt[j])!=mp.end()){
        mp[txt[j]]--;
        if(mp[txt[j]]==0){
            count--;
        }n
    }
    if(j-i+1 <k) j++;
    else if(j-i+1 == k){
        if(count==0) ans++;
        if(mp.find(txt[i])!=mp.end()){
            mp[txt[i]]++;
            if(mp[txt[i]]==1){
                count++;
            }
        }
        i++;
        j++;
    }
}
return ans;
}

}

int main(){

  int res=solve(arr,k,5);
  cout<<res;
}
