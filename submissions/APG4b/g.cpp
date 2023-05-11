#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 5;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < N - 1; i++) {
    if (a.at(i) == a.at(i + 1)) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
