#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  ll N;
  cin >> N;
  ll suma = 0, sumb = 0;
  vector<ll> A(N), B(N), dist;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    suma += A[i];
  }
  for (int i = 0; i < N; i++) {
    cin >> B[i];
    sumb += B[i];
    if (A[i] - B[i] >= 0) {
      dist.push_back(A[i] - B[i]);
    }
  }
  sort(dist.begin(), dist.end());
  ll tmp = suma - sumb;
  if (tmp < 0)
    cout << -1 << endl;
  else {
    ll cnt = 0;
    for (auto p : dist) {
      if (tmp >= p) {
        cnt++;
        tmp -= p;
      }
    }
    cout << N - cnt << endl;
  }
}
