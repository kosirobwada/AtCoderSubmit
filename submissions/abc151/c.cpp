#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, p;
  string s;
  cin >> N >> M;
  vector<int> ac(N);
  vector<int> wa(N);
  int wac = 0, acc = 0;
  for (int i = 0; i < M; i++) {
    cin >> p >> s;
    if (ac.at(p - 1) == 0) {
      if (s == "WA") {
        wac++;
        wa.at(p - 1)++;
      } else {
        acc++;
        ac.at(p - 1)++;
      }
    }
  }
  for (int i = 0; i < N; i++) {
    if (ac.at(i) == 0)
      wac -= wa.at(i);
  }
  cout << acc << " " << wac << endl;
}
