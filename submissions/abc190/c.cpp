#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A[i] >> B[i];
  }

  int K;
  cin >> K;

  vector<int> C(K), D(K);
  for (int i = 0; i < K; i++) {
    cin >> C[i] >> D[i];
  }

  int ans = 0;

  for (int bit = 0; bit < (1 << K); bit++) {
    // cout << bit << " ";
    vector<int> count(N + 1, 0);
    int tmp = 0;

    for (int i = 0; i < K; i++) {
      if (bit & (1 << i)) {
        count[C[i]]++;
      } else {
        count[D[i]]++;
      }
    }

    for (int i = 0; i < M; i++) {
      if (count[A[i]] > 0 && count[B[i]] > 0) {
        tmp++;
      }
    }

    ans = max(ans, tmp);
  }

  cout << ans << endl;

  return 0;
}
