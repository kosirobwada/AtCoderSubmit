#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> b(N - 1);
  for (int i = 0; i < N - 1; i++) {
    cin >> b.at(i);
  }
  vector<int> a(N);
  int sum = b.at(0);
  for (int i = 0; i < N - 2; i++) {
    if (b.at(i) >= b.at(i + 1))
      sum += b.at(i + 1);
    else
      sum += b.at(i);
  }
  sum += b.at(N - 2);
  cout << sum << endl;
}
