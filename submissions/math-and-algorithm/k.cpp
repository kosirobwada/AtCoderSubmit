#include <bits/stdc++.h>
using namespace std;

bool isprime(long long N) {
  for (long long i = 2; i * i <= N; i++) {
    if (N % i == 0)
      return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  vector<int> ans;
  for (int i = 2; i <= n; i++)
    if (isprime(i))
      ans.push_back(i);
  for (int i = 0; i < ans.size() - 1; i++) {
    cout << ans[i] << " ";
  }
  cout << ans[ans.size() - 1] << endl;
  return 0;
}
