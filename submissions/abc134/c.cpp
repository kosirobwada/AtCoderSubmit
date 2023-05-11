#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N), b(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  b = a;
  sort(b.begin(), b.end());
  for (int i = 0; i < N; i++) {
    if (a.at(i) != b.at(N - 1))
      cout << b.at(N - 1) << endl;
    else
      cout << b.at(N - 2) << endl;
  }
}
