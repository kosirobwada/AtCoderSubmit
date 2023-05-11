#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N), C(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];
  for (int i = 0; i < N; i++)
    cin >> B[i];
  vector<int> cnt(N + 1);
  for (int i = 0; i < N; i++) {
    cin >> C[i];
    C[i]--;
    cnt[B[C[i]]]++;
  }
  long long res = 0;
  for (int i = 0; i < N; i++) {
    res += cnt[A[i]];
  }
  cout << res << endl;
}
