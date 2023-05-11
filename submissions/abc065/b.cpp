#include <bits/stdc++.h>
using namespace std;

int main() {
  int i, N, button = 1, count = 0;
  cin >> N;
  vector<int> a(N);
  for (i = 0; i < N; i++)
    cin >> a.at(i);
  for (i = 0; i < N; i++) {
    if (a.at(button - 1) == 2) {
      cout << i + 1 << endl;
      break;
    } else if (i == (a.size() - 1)) {
      cout << -1 << endl;
    } else {
      button = a.at(button - 1);
    }
  }
}
