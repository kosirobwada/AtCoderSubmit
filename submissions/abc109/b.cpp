#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> W(N);
  for (int i = 0; i < N; i++) {
    cin >> W.at(i);
  }
  bool ans = true;
  for (int i = 1; i < N; i++) {
    if (W[i - 1][W[i - 1].size() - 1] != W[i][0])
      ans = false;
    for (int j = 0; j < i; j++) {
      if (W.at(i) == W.at(j))
        ans = false;
    }
  }
  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
