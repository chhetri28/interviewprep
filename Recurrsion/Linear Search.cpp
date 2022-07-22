#include<bits/stdc++.h>
using namespace std;

// bool  fun(vector<int>a, int i){
//   if(i==a.size()-1) return true;
//
//   return a[i]<a[i+1] && fun(a,i+1);
// }


int fun(std::vector<int> v,int index,int target){
  if(index==v.size()-1) return -1;
  if(v[index]== target) return index+1;
  return fun(v,index+1,target);
}
void solve()
{
  vector<int>a={1,2,3,4,5,3,6};
  int target=7;
  cout<<fun(a,0,target);
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
f
#ifndef ONLINE_JUDGE
reopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t;
cin>>t;
while(t--)
{
	solve();
	cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
