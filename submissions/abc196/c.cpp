#include <bits/stdc++.h>
using namespace std;
int main() {
  long long N, ans = 0;
  cin >> N;
  while (stoll(to_string(ans) + to_string(ans)) <= N) {
    ans++;
  }
  cout << ans - 1 << endl;
}
