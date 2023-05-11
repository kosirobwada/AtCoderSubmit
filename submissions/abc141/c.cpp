#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> b(N, K), a(Q);
  for (int i = 0; i < Q; i++) {
    cin >> a.at(i);
    b.at(a.at(i) - 1)++;
  }

  for (int i = 0; i < N; i++) {
    if (b.at(i) > Q)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}
