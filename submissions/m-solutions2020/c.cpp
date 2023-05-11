#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 1; i <= N; i++)
    cin >> A[i];
  for (int i = K + 1; i <= N; i++) {
    if (A[i - K] < A[i])
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}
