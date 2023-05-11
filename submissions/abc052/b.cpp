#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<char> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  int x = 0, y = 0;
  for (int i = 0; i < N; i++) {
    if (a.at(i) == 'I') {
      x = x + 1;
    } else if (a.at(i) == 'D') {
      x = x - 1;
    }
    y = max(y, x);
  }
  cout << y << endl;
}
