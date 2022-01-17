#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair <ll, ll>;

int main() {
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  freopen("inp.txt", "r", stdin);
  
  string str1, str2;
  cin >> str1;
  cin >> str2;

  int len1 = str1.length();
  int len2 = str2.length();

  int dp[1001][1001] = {0, };

  for(int i=1; i<=len1; i++){
    for(int j=1; j<=len2; j++){
      if(str1[i-1] == str2[j-1])
        dp[i][j] = dp[i-1][j-1] + 1;
      else
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    }
  }
  cout << dp[len1][len2];
}