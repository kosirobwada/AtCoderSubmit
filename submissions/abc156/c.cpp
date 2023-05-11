#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, t, min = 10000000;
  cin >> N;
  vector<int> x(N);
  for (int i = 0; i < N; i++) {
    cin >> x.at(i);
  }
  for (int i = 1; i <= 100; i++) {
    int S = 0;
    for (int j = 0; j < N; j++) {
      S += (i - x.at(j)) * (i - x.at(j));
    }
    min = std::min(S, min);
  }
  cout << min << endl;
}
