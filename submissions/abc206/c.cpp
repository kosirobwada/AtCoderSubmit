#include <bits/stdc++.h>
using namespace std;
int main() {
  long long N;
  cin >> N;
  vector<long long> a(N);
  map<long long, long long> mp;
  long long ans = N * (N - 1) / 2;
  for (int i = 0; i < N; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }
  int cnt = 0;
  for (auto itr = mp.begin(); itr != mp.end(); itr++) {
    if (itr->second > 1) {
      ans -= itr->second * (itr->second - 1) / 2;
    }
  }
  cout << ans << endl;
  return 0;
}
