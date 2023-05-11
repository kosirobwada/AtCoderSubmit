#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
ll Mdis(ll x1, ll y1, ll x2, ll y2) {
  double Mdis = abs(x1 - x2) + abs(y1 - y2);
  return Mdis;
}
int main() {
  int N, M;
  cin >> N >> M;
  vector<ll> A(N), B(N), C(M), D(M);
  for (int i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
  }
  for (int i = 0; i < M; i++) {
    cin >> C[i] >> D[i];
  }
  for (int i = 0; i < N; i++) {
    int min_dis = Mdis(A[i], B[i], C[0], D[0]), ch = 1;
    for (int j = 1; j < M; j++) {
      const int cur_dis = Mdis(A[i], B[i], C[j], D[j]);
      if (min_dis > cur_dis) {
        min_dis = cur_dis;
        ch = j + 1;
      }
    }
    cout << ch << endl;
  }
  return 0;
}
