#include<bits/stdc++.h>
using namespace std;

bool  fun(vector<int>a, int i){
  if(i==a.size()-1) return true;

  return a[i]<a[i+1] && fun(a,i+1);
}

void solve()
{
  vector<int>a={1,2,3,4,5,3,6};
  cout<<fun(a,0);
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
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
