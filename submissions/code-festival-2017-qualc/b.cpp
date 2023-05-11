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
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    if (A[i] % 2 == 0)
      cnt++;
  }
  cout << pow(3, N) - pow(2, cnt) << endl;
  return 0;
}
