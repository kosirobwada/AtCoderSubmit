#include <bits/stdc++.h>
using namespace std;
// It is done using the exhaustive-search...
int cnt[10];
long long N;
int ans = 0;
bool is_good(long long n) {
  for (int i = 0; i < 10; i++) {
    cnt[i] = 0;
  }
  while (n) {
    int r = n % 10;
    cnt[r]++;
    n /= 10;
  }
  return (cnt[3] > 0 && cnt[7] > 0 && cnt[5] > 0);
}
void dfs(long long n) {
  if (n > N) {
    return;
  }
  if (is_good(n)) {
    ans++;
  }
  dfs(n * 10 + 7);
  dfs(n * 10 + 3);
  dfs(n * 10 + 5);
}
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cin >> N;
  dfs(0);
  cout << ans << '\n';
}
