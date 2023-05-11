#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  for (int i = 0; i < N; i++) {
    cin >> d.at(i);
  }
  if (N % 2 == 1) {
    cout << 0 << endl;
  }
  sort(d.begin(), d.end());
  cout << d.at(N / 2) - d.at(N / 2 - 1) << endl;
}
