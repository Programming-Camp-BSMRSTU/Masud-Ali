#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     vector<int> vi;
typedef     vector<long long> vl;
typedef     pair<int, int>pi;
typedef     pair<long long, long long>pl;
#define F   first
#define S   second
#define pb  push_back
#define     all(x)      x.begin() , x.end()
//#define mp  make_pair
#define     REP(i,a,b) for(i=a;i<=b;i++)
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
int main()
{
 
  int t=1;
  //cin >> t;
  while (t--)
  {
    int n,i,x,y,w,j;
    cin>>n>>w;
    int a[n+3];
    for(i=0;i<n;i++) cin>>a[i];
    vector<int>dp(w+1,1e9);
  dp[0]=0;
    for(i=1;i<=w;i++)
    {
       for(j=0;j<n;j++)
       {
        if(i-a[j]>=0) dp[i]=min(dp[i],dp[i-a[j]]+1);
       }
    }
    if(dp[w]!=1e9) cout<<dp[w]<<endl;
    else cout<<"-1"<<endl;
  }
}
