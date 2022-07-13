#include<bits/stdc++.h>
using namespace std;
void solve(string s,int k){
  int i=0,j=0;
  unordered_map<char,int>mp;
  int mx=-1;
  while(j<s.length()){
    mp[s[j]]++;

    if(mp.size()<k) j++;

    else if(mp.size()==k){
      mx=max(mx,j-i+1);
    j++;
    }
    else if(mp.size()>k){
      while(mp.size()>k and i<s.length()){
        mp[s[i]]--;
        if(mp[s[i]]==0){
          mp.erase(s[i]);
        }
        i++;
      }
      j++;
    }
  }
  cout<<mx;
}
int main(){
  string s;
  cin>>s;
  int k; cin>>k;
  solve(s,k);
}
