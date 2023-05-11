#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int N, sum = 0, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    sum += A[i];
  }
  if (sum <= K && sum % 2 == K % 2)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
