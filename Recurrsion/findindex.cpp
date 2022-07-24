#include<bits/stdc++.h>
using namespace std;

vector<int>findind(vector<int>a,int target,int index){
    vector<int>res;
    if(index==a.size()-1) return res;

    if(a[index]==target) res.push_back(index);

    return findind(a,target,index+1);
}
void solve()
{
  vector<int>a={1,2,3,4,5,3,4,2};
  int target=4;
  vector<int>res=findind(a,target,0);
  for(int i:res){
    cout<<i<<" ";
  }
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
