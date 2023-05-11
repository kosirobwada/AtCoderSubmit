#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H.at(i);
  }
  bool ans = true;
  int premax = 0;
  for (int i = 0; i < N; i++) {
    if (premax > H.at(i) + 1)
      ans = false;
    premax = max(premax, H.at(i));
  }
  cout << (ans ? "Yes" : "No");
}
