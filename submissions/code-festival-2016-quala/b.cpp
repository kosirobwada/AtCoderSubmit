#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int N, cnt = 0;
  cin >> N;
  vector<int> A(N);
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }
  for (int i = 1; i <= N; i++) {
    if (A[A[i]] == i)
      cnt++;
  }
  cout << cnt / 2 << endl;
  return 0;
}
