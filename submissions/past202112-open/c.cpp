#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, k;
  cin >> N;
  int fa[6] = {};
  string p, v;
  for (int i = 0; i < N; i++) {
    cin >> p >> v;
    k = p[0] - 'A';
    if ((fa[k] == 0) && (v == "AC"))
      fa[k] = i + 1;
  }
  for (int i = 0; i < 6; i++)
    cout << fa[i] << endl;
}
