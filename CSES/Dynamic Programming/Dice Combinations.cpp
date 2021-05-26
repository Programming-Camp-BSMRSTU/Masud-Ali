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
#define mp  make_pair
#define     REP(i,a,b) for(i=a;i<=b;i++)
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
ll dp[2000005];
ll  mod=1e9+7;
int main()
{
    int t = 1;
    //cin >> t;
    while (t--)
    {
        ll n,i,j,x,y;
        cin>>n;
         dp[0]=1;
         for(i=1;i<=n;i++)
         {
          for(j=1;j<=6&&(i-j)>=0;j++)
          {
            dp[i]+=(dp[i-j]%mod);
            dp[i]=dp[i]%mod;
          }
         }
         cout<<dp[n]<<endl;
    }
 
}
