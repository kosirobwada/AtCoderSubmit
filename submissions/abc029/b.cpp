#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
const int INF = 1e9;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N = 12;
  vector<string> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S[i];
  }
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    int x = S[i].size();
    for (int j = 0; j < x; j++) {
      if (S[i][j] == 'r') {
        cnt++;
        break;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
