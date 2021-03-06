#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     unsigned long long    ull;
typedef     vector<int> vi;
typedef     vector<long long> vl;
typedef     pair<int, int>pi;
typedef     pair<long long, long long>pl;
#define F   first
#define S   second
#define pb  push_back
#define     all(x)      x.begin() , x.end()
#define mp  make_pair
#define       FOR(i,a,b) for(i=a;i<=b;i++)
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
int a[101];
int dp[101][1000001], n, k,mod=1e9+7;
void  iterative()
{
  int i, j, ans, x, y;
  dp[0][0]=1;  
  for (i = 1; i <= n; i++) {
    for (j = 0; j <= k; j++) {
      dp[i][j] = dp[i - 1][j];
      x = j - a[i - 1];
      if (x >= 0) dp[i][j]+=(dp[i][x]);
      dp[i][j]%=mod;
    }

  }
}
int main()
{
  int t = 1;;
  //cin>>t;
  while (t--) {
    int i, x, y, s = 0;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    iterative();
    printf("%d\n", dp[n][k]);

  }
}
