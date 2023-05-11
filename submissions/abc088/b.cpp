#include <bits/stdc++.h>
using namespace std;

int main() {
  int i, N;
  int A = 0;
  int B = 0;
  cin >> N;
  vector<int> a(N);
  for (i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  for (i = 0; i < N; i++) {
    if (i % 2 == 0)
      A += a.at(i);
    else
      B += a.at(i);
  }
  cout << A - B << endl;
}
